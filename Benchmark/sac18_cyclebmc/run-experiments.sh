#!/bin/bash

TIMEOUT=1800
MEMLIMIT=8000000

RUN_DLBE_CycleBMC=yes
RUN_DLBE_CBMC_Approx=yes
RUN_DLBE_CBMC_Assign=yes
RUN_DLBE_CBMC_Test=yes
RUN_DLBE_CBMC_Model=yes

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
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeBmcForInvariant" >> results/dlbe_cyclebmc/console.log 2>&1) 2>>results/dlbe_cyclebmc_time.txt)
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
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeApproximationBmcForInvariant" >> results/dlbe_cbmc_approx/console.log 2>&1) 2>>results/dlbe_cbmc_approx_time.txt)
        echo "============================">>results/dlbe_cbmc_approx_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC with an Approximation for Calls"
fi

#############################################################################
# Dynamic LBE based Cycle-BMC with an Approximation of calls and Only Assignments
#############################################################################

if [ "$RUN_DLBE_CBMC_Assign" = "yes" ]; then
    echo "Running experiments with DLBE-based Cycle-BMC with an Approximation of Assignments for Calls ..."
    >results/dlbe_cbmc_approxAssign_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/dlbe_cbmc_approxAssign_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeApproximationBmcForInvariantWithAssign" >> results/dlbe_cbmc_approxAssign/console.log 2>&1) 2>>results/dlbe_cbmc_approxAssign_time.txt)
        echo "============================">>results/dlbe_cbmc_approxAssign_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC with an Approximation for Calls"
fi

#############################################################################
# Dynamic LBE based Cycle-BMC with an Approximation of calls for Testing
#############################################################################

if [ "$RUN_DLBE_CBMC_Test" = "yes" ]; then
    echo "Running experiments with DLBE-based Cycle-BMC with an Approximation of Assignments for Calls for Testing..."
    >results/dlbe_cbmc_approxTest_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/dlbe_cbmc_approxTest_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeApproximationBmcTest" >> results/dlbe_cbmc_approxTest/console.log 2>&1) 2>>results/dlbe_cbmc_approxTest_time.txt)
        echo "============================">>results/dlbe_cbmc_approxTest_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC with an Approximation for Calls"
fi

#############################################################################
# Dynamic LBE based Cycle-BMC with an Approximation of calls with Model
#############################################################################

if [ "$RUN_DLBE_CBMC_Model" = "yes" ]; then
    echo "Running experiments with DLBE-based Cycle-BMC with an Approximation of Assignments for Calls with Model..."
    >results/dlbe_cbmc_approxModel_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/dlbe_cbmc_approxModel_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useDlbeApproximationBmcUseModel" >> results/dlbe_cbmc_approxModel/console.log 2>&1) 2>>results/dlbe_cbmc_approxModel_time.txt)
        echo "============================">>results/dlbe_cbmc_approxModel_time.txt
        echo "DONE"
    done
else
    echo "Skipping DLBE-based Cycle-BMC with an Approximation for Calls"
fi
