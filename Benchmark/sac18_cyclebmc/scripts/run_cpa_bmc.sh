#!/bin/bash

# set to the location of CPAchecker
tool_home=`dirname $0`/../bin/CPAchecker-1.6.1-unix

here=`pwd`

cd $tool_home
exec ./scripts/cpa.sh -bmc -noout "-setprop" "cpa.bounds.maxLoopIterations=0" "-setprop" "solver.solver=z3"  "$here/$1" "-setprop" "limits.time.cpu=$2s" -heap 8g
