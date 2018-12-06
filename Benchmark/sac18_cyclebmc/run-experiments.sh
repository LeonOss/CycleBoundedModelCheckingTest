#!/bin/bash

TIMEOUT=1800
MEMLIMIT=8000000

RUN_DLBE_CycleBMC=yes
RUN_DLBE_CBMC_Approx=yes

#############################################################################
# Auxiliary functions
#############################################################################
function parseSpec {
    local file
    local main
    local formula
    local bound
    
    IFS=":"
    while read -r name value
    do
        case $name in 
        "file")
            file="$value"
            ;;
        "main")
            main="$value"
            ;;
        "formula")
            formula="$value"
            ;;
        "bound")
            bound="$value"
            ;;
        esac
    done < $1
    echo "$file:$main:$formula:$bound"
}

#############################################################################
# Dynamic LBE based Cycle-BMC
#############################################################################

if [ "$RUN_DLBE_CycleBMC" = "yes" ]; then
    echo "Running experiments with DLBE-based Cycle-BMC ..."
    >results/dlbe_cyclebmc_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/dlbe_cyclebmc_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeBmcForInvariant" > results/dlbe_cyclebmc/`basename $fn`.log 2>&1) 2>>results/dlbe_cyclebmc_time.txt)
        echo "============================">>results/dlbe_cyclebmc_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC"
fi

#############################################################################
# Dynamic LBE based Cycle-BMC with an Approximation of calls
#############################################################################

if [ "$RUN_DLBE_CBMC_Approx" = "yes" ]; then
    echo "Running experiments with DLBE-based Cycle-BMC with an Approximation for Calls ..."
    >results/dlbe_cbmc_approx_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/dlbe_cbmc_approx_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeApproximationBmcForInvariant" > results/dlbe_cbmc_approx/`basename $fn`.log 2>&1) 2>>results/dlbe_cbmc_approx_time.txt)
        echo "============================">>results/dlbe_cbmc_approx_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC with an Approximation for Calls"
fi
