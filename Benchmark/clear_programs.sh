#!/bin/bash

find ./programs/esbmc/ -type f -exec rm -f {} \; 
find ./programs/cpachecker/ -type f -exec rm -f {} \; 
find ./programs/nusmv/ -type f -exec rm -f {} \; 
