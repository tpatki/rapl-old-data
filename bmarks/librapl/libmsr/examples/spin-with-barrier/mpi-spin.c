#include <stdio.h>
#include <mpi.h>

#define LONG_RANGE 700000000
//#define LONG_RANGE 50000

main(int argc, char **argv)
{
  int rank;
  unsigned long i=0;
  int iter=1;
  int j;
  double starttime, endtime;

  //read iter 

  iter = atoi(argv[1]);
//  printf("Entering the MPI environment");


   MPI_Init(&argc,&argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &rank);
   starttime = MPI_Wtime();


   for(j=0;j<iter;j++){

   	for(i=0;i<LONG_RANGE; i++); //do nothing but spin

	MPI_Barrier(MPI_COMM_WORLD);

   }
            
   endtime   = MPI_Wtime();

   printf("\nThat took %f seconds for rank %d\n",endtime-starttime, rank);
 
   MPI_Finalize();
}

