#!/bin/bash

# set to the location of ESBMC
tool_home=`dirname $0`/../bin/esbmc-v4.5.0-linux-static-64/bin

here=`pwd`

cd $tool_home
# Note: running with --smt-during-symex --smt-symex-guard performs significantly worse
exec ./esbmc --quiet --z3 --ir --incremental-bmc "$here/$1"
