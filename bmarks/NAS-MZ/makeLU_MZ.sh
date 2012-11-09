#!/bin/bash

#mkdir bin

make lu-mz CLASS=A NPROCS=16

make lu-mz CLASS=C NPROCS=1
make lu-mz CLASS=C NPROCS=2
make lu-mz CLASS=C NPROCS=4
make lu-mz CLASS=C NPROCS=8
make lu-mz CLASS=C NPROCS=16
make lu-mz CLASS=C NPROCS=32
make lu-mz CLASS=C NPROCS=64
make lu-mz CLASS=C NPROCS=128
#make lu-mz CLASS=C NPROCS=256
#make lu-mz CLASS=C NPROCS=512
#make lu-mz CLASS=C NPROCS=1024
