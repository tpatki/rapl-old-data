#!/bin/bash


cd lulesh
make clean && make
cd power
msub rapl-runs-small.msub
 
cd ../../sphot
make clean && make
cd power
msub rapl-runs-small.msub

