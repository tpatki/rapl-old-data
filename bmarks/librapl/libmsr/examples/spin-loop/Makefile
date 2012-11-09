
mpi-spin:
	mpicc -O0 -o mpi-spin mpi-spin.c -Xlinker -rpath=$(HOME)/local/src/rapl-bmarks/bmarks/librapl/libmsr/lib -L$(HOME)/local/src/rapl-bmarks/bmarks/librapl/libmsr/lib -lrapl

clean:
	rm -f mpi-spin *.o

