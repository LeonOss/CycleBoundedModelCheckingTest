#!/bin/bash

TIMEOUT=1800
MEMLIMIT=8000000

RUN_DLBE_CycleBMC=yes
RUN_ABE_CycleBMC=no
RUN_BMC_CycleBMC=no

TRANSLATE_PROGRAMS=no

RUN_CPA_ABE=yes
RUN_CPA_BMC=no
RUN_ESBMC=yes
RUN_ESBMC_INCR=yes
RUN_NUSMV=yes

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
# ABE-based Cycle-BMC
#############################################################################

if [ "$RUN_ABE_CycleBMC" = "yes" ]; then
    echo "Running experiments with ABE-based Cycle-BMC ..."
    >results/abe_cyclebmc_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/abe_cyclebmc_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useAbeBmcForInvariant" > results/abe_cyclebmc/`basename $fn`.log 2>&1) 2>>results/abe_cyclebmc_time.txt)
        echo "============================">>results/abe_cyclebmc_time.txt
        echo "DONE"
    done
else
    echo "Skipping ABE-based Cycle-BMC"
fi

#############################################################################
# BMC-based Cycle-BMC
#############################################################################

if [ "$RUN_BMC_CycleBMC" = "yes" ]; then
    echo "Running experiments with BMC-based Cycle-BMC ..."
    >results/bmc_cyclebmc_time.txt
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/bmc_cyclebmc_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.useStdBmcForInvariant" > results/bmc_cyclebmc/`basename $fn`.log 2>&1) 2>>results/bmc_cyclebmc_time.txt)
        echo "============================">>results/bmc_cyclebmc_time.txt
        echo "DONE"
    done
else
    echo "Skipping BMC-based Cycle-BMC"
fi

#############################################################################
# Translate BMC jobs on ST programs to other formats
#############################################################################

if [ "$TRANSLATE_PROGRAMS" = "yes" ]; then
    echo "Translating bounded verification tasks ..."
    for fn in programs/st/*.spec; do
        IFS=":" read file main formula bound<<<"$(parseSpec $fn)"
        echo -n " $fn ..."
        sh scripts/run_arcade.sh $file $main "$formula" $bound "PlcSimulatorParameters.exportBmcJob"
        echo "DONE"
    done
else
    echo "Translation of bounded verification tasks"
fi

#############################################################################
# CPAchecker ABE+PA
#############################################################################

if [ "$RUN_CPA_ABE" = "yes" ]; then
    echo "Running experiments with CPAchecker (ABE+PA) ..."
    >results/cpa_abe_time.txt
    for fn in programs/cpachecker/*.c; do
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/cpa_abe_time.txt
        (time (ulimit -t $TIMEOUT; scripts/run_cpa_abe.sh $fn $TIMEOUT> results/cpa_abe/`basename $fn`.log 2>&1) 2>>results/cpa_abe_time.txt)
        echo "============================">>results/cpa_abe_time.txt
        echo "DONE"
    done
else
    echo "Skipping CPAchecker (ABE+PA)"
fi

#############################################################################
# CPAchecker BMC
#############################################################################

if [ "$RUN_CPA_BMC" = "yes" ]; then
    echo "Running experiments with CPAchecker (BMC) ..."
    >results/cpa_bmc_time.txt
    for fn in programs/cpachecker/*.c; do
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/cpa_bmc_time.txt
        (time (ulimit -t $TIMEOUT; scripts/run_cpa_bmc.sh $fn $TIMEOUT> results/cpa_bmc/`basename $fn`.log 2>&1) 2>>results/cpa_bmc_time.txt)
        echo "============================">>results/cpa_bmc_time.txt
        echo "DONE"
    done
else
    echo "Skipping CPAchecker (BMC)"
fi

#############################################################################
# ESBMC
#############################################################################

if [ "$RUN_ESBMC" = "yes" ]; then
    echo "Running experiments with ESBMC ..."
    >results/esbmc_time.txt
    for fn in programs/esbmc/*.c; do
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/esbmc_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_esbmc.sh $fn > results/esbmc/`basename $fn`.log 2>&1) 2>>results/esbmc_time.txt)
        echo "============================">>results/esbmc_time.txt
        echo "DONE"
    done
else
    echo "Skipping ESBMC"
fi

#############################################################################
# ESBMC (incremental)
#############################################################################

if [ "$RUN_ESBMC_INCR" = "yes" ]; then
	echo "Running experiments with ESBMC (incremental)..."
    >results/esbmc_incr_time.txt
    for fn in programs/esbmc/*.c; do
        echo -n " $fn ..."
		echo "Checking " `basename $fn` ":">>results/esbmc_incr_time.txt
		(time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_esbmc_incr.sh $fn > results/esbmc_incr/`basename $fn`.log 2>&1) 2>>results/esbmc_incr_time.txt)
        echo "============================">>results/esbmc_incr_time.txt
        echo "DONE"
    done
else
	echo "Skipping ESBMC (incremental)"
fi

#############################################################################
# NuSMV
#############################################################################

if [ "$RUN_NUSMV" = "yes" ]; then
    echo "Running experiments with NuSMV ..."
    >results/nusmv_time.txt
    for fn in programs/nusmv/*.smv; do
        echo -n " $fn ..."
        echo "Checking " `basename $fn` ":">>results/nusmv_time.txt
        (time (ulimit -t $TIMEOUT -v $MEMLIMIT; scripts/run_nusmv.sh $fn > results/nusmv/`basename $fn`.log 2>&1) 2>>results/nusmv_time.txt)
        echo "============================">>results/nusmv_time.txt
        echo "DONE"
    done
else
    echo "Skipping NuSMV"
fi
