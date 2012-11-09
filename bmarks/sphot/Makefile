##############################################################################
#
# sphot Makefile 
#
##############################################################################

PROG     = sphot

#####
# ***Modifications Required***
# Specify linker/loader and flags as well as library directories and libs.
# These can change depending on your preference and platform.
#####
LDR      ?=mpif77
#LDRFLAGS = -qsmp=omp
#LDRFLAGS = -g -fopenmp
LDRFLAGS = -g -openmp -traceback -diag-disable 177 -diag-disable 279 -diag-disable 181 -nocheck
LIB_DIRS=
LIBS=
LIB_DIRS =-Xlinker -rpath -Xlinker $(HOME)/local/src/rapl-bmarks/bmarks/librapl/libmsr/lib -L$(HOME)/local/src/rapl-bmarks/bmarks/librapl/libmsr/lib
#LIB_DIRS =-Xlinker -rpath=$(HOME)/local/src/bmarks/librapl/libmsr/lib -L$(HOME)/local/src/bmarks/librapl/libmsr/lib -lrapl
LIBS     = -lrapl
##### End of required modifications section



##############################################################################
# Rules for Fortran and C object file dependencies
# Note that sphot does not require any C files - references to C files are
# provided as a convenience should you desire to introduce C files for
# profilers, timing tools or something similar.
# Note also that the position of LIBS in the LDR command is critical for
# some platforms. 
##############################################################################


#$(PROG): src/*.f src/*.c includes/*
#	make build;

$(PROG): sources src/*.f includes/*
	cd bin; \
	$(LDR) $(LDRFLAGS) *.o -fPIC -DPIC -o $(PROG) $(LIB_DIRS) $(LIBS) ; \
	mv $(PROG) ../.

sources: 
	$(MAKE) -C src -f Makefile.src

clean:
	rm -f $(PROG) bin/*.o

.PHONY: sources
