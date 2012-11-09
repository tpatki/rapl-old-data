
mpi-spin:
	mpicc -O0 -o mpi-spin mpi-spin.c  -Xlinker -rpath=$(PATH_LIBMSR) -L$(PATH_LIBMSR) -lrapl

clean:
	rm -f mpi-spin *.o

