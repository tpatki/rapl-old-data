/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision: 2.6 $
 ***********************************************************************EHEADER*/




#ifndef THREADED_KRYLOV_H
#define THREADED_KRYLOV_H

#include "blas_dh.h"

extern void bicgstab_euclid(Mat_dh A, Euclid_dh ctx, double *x, double *b, 
                                                              HYPRE_Int *itsOUT);

extern void cg_euclid(Mat_dh A, Euclid_dh ctx, double *x, double *b, 
                                                              HYPRE_Int *itsOUT);

#endif
