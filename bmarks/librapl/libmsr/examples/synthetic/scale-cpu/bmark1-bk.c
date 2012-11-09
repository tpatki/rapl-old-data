//Tapasya Patki
//Synthetic - 1
//CPU-bound and scalable

#include <mpi.h>
#include <omp.h>
#include <stdio.h>


//Large is 2^32 atm
#define LARGE 42949672960
//#define MPI_WTIME_IS_GLOBAL 1


int main(int argc, char * argv[]){

	int myrank, numnodes;
	unsigned long mychunk;
	int root = 0;
//	double i;
	unsigned long i;
	double start, end;

	MPI_Init(&argc, &argv);

	MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
	MPI_Comm_size(MPI_COMM_WORLD, &numnodes);

	mychunk = (unsigned long) (LARGE/numnodes);
	
	if(myrank==0)
		printf("\nEach chunk is: %ld", mychunk);


	start=MPI_Wtime();

	MPI_Bcast(&mychunk, 1, MPI_UNSIGNED_LONG, root, MPI_COMM_WORLD);

	#pragma omp parallel private(i)
	#pragma omp for
		//Run a spin loop. Use O0 to run unoptimized	
		for(i=0;i<mychunk;i++);
	
	end=MPI_Wtime();

	printf("\nTime is: %lf secs", end-start);

	MPI_Finalize();

return 0;
}
