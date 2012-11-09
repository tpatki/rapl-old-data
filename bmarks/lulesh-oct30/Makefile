
#
# Must use Intel compiler v13 or later
#

#Patki: Trying this with gcc
#luleshMPI_OMP: luleshMPI_OMP.cc
#	mpig++ -g -O2 -fopenmp -I/usr/gapps/silo/current/${SYS_TYPE}/include  luleshMPI_OMP.cc /usr/gapps/silo/current/${SYS_TYPE}/lib/libsiloh5.a /usr/gapps/silo/hdf5/1.8.4/${SYS_TYPE}/lib/libhdf5.a /usr/gapps/silo/szip/2.1/${SYS_TYPE}/lib/libsz.a -lm -lz -o $@

luleshMPI_OMP: luleshMPI_OMP.cc
	mpicc -g -O3 -openmp -I/usr/gapps/silo/current/${SYS_TYPE}/include  luleshMPI_OMP.cc /usr/gapps/silo/current/${SYS_TYPE}/lib/libsiloh5.a /usr/gapps/silo/hdf5/1.8.4/${SYS_TYPE}/lib/libhdf5.a /usr/gapps/silo/szip/2.1/${SYS_TYPE}/lib/libsz.a -lm -lz -Xlinker -rpath -Xlinker$(PATH_LIBMSR) -L$(PATH_LIBMSR) -lrapl -o $@
#
clean: 
	rm -f luleshMPI_OMP
