#!/bin/bash

# set to the location of ESBMC
tool_home=`dirname $0`/../bin/esbmc-v4.5.0-linux-static-64/bin

here=`pwd`

cd $tool_home
exec ./esbmc --quiet --z3 --ir "$here/$1"
