#!/bin/bash

# set to the location of CPAchecker
tool_home=`dirname $0`/../bin/CPAchecker-1.6.1-unix

here=`pwd`

cd $tool_home
exec ./scripts/cpa.sh -predicateAnalysis-PredAbsRefiner-ABEl "-setprop" "analysis.checkCounterexamples=true" "-setprop" "solver.solver=z3" -noout "$here/$1" "-setprop" "limits.time.cpu=$2s" -heap 8g
