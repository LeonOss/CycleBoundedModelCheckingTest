#!/bin/bash

# set to the location of NuSMV
tool_home=`dirname $0`/../bin/NuSMV-2.6.0-Linux/bin

here=`pwd`

cd $tool_home
#Note: running with -bmc impossible since the cycle-bound and step-bound
#      needed here are not related
exec ./NuSMV "$here/$1"
