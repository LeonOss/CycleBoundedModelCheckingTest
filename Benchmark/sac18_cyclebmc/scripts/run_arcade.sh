#!/bin/bash

# set to the location of arcade.plc
tool_home=`dirname $0`/../bin/arcade

file=$1
main=$2
formula=$3
bound=$4
technique=$5

here=`pwd`

cd $tool_home
if [ "$technique" = "PlcSimulatorParameters.exportBmcJob" ]; then
    exec java -Djava.library.path=. -ea -jar arcade.plc-cyclebmc.jar mc "$formula" $main $technique "true" "PlcSimulatorParameters.bmcCycleBound" $4 "PlcSimulatorParameters.exportDumpPath" "$here/programs" "--" "$here/programs/st/$1"
else
    exec java -Djava.library.path=. -ea -jar arcade.plc-cyclebmc.jar mc "$formula" $main $technique "true" "PlcSimulatorParameters.bmcCycleBound" $4 "--" "$here/programs/st/$1"
fi
