#!/bin/bash

#Export path to libmsr
curr=`pwd`

#export PATH_LIBMSR=$curr/librapl/libmsr/lib
export PATH_LIBMSR=$curr/librapl/libmsr/lib
echo $PATH_LIBMSR

cd librapl/libmsr
mkdir -p lib
make clean && make 

cd mpi
make clean && make rapl-gnu

#cd ../../../lulesh-oct30
#make clean && make

#cd ../examples/spin-with-barrier
#make clean && make
#cd ../../../

#cd lulesh
#make clean && make

cd ../../../sphot
make clean && make

cd ../NAS-MZ
make clean 
mkdir -p bin
sh makeSP_MZ.sh
sh makeBT_MZ.sh
#sh makeLU_MZ.sh

