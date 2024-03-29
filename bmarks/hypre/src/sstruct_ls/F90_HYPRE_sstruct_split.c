/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision: 2.8 $
 ***********************************************************************EHEADER*/

/******************************************************************************
 *
 * HYPRE_SStructSplit solver interface
 *****************************************************************************/

#include "headers.h"
#include "fortran.h"

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitCreate
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitcreate, HYPRE_SSTRUCTSPLITCREATE)
   (hypre_F90_Comm *comm,
    hypre_F90_Obj *solver_ptr,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitCreate(
          hypre_F90_PassComm (comm),
          hypre_F90_PassObjRef (HYPRE_SStructSolver, solver_ptr) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitDestroy
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitdestroy, HYPRE_SSTRUCTSPLITDESTROY)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitDestroy(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetup
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsetup, HYPRE_SSTRUCTSPLITSETUP)
   (hypre_F90_Obj *solver,
    hypre_F90_Obj *A,
    hypre_F90_Obj *b,
    hypre_F90_Obj *x,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetup(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassObj (HYPRE_SStructMatrix, A),
          hypre_F90_PassObj (HYPRE_SStructVector, b),
          hypre_F90_PassObj (HYPRE_SStructVector, x) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSolve
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsolve, HYPRE_SSTRUCTSPLITSOLVE)
   (hypre_F90_Obj *solver,
    hypre_F90_Obj *A,
    hypre_F90_Obj *b,
    hypre_F90_Obj *x,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSolve(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassObj (HYPRE_SStructMatrix, A),
          hypre_F90_PassObj (HYPRE_SStructVector, b),
          hypre_F90_PassObj (HYPRE_SStructVector, x) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetTol
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsettol, HYPRE_SSTRUCTSPLITSETTOL)
   (hypre_F90_Obj *solver,
    hypre_F90_Dbl *tol,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetTol(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassDbl (tol) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetMaxIter
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsetmaxiter, HYPRE_SSTRUCTSPLITSETMAXITER)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *max_iter,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetMaxIter(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassInt (max_iter) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetZeroGuess
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsetzeroguess, HYPRE_SSTRUCTSPLITSETZEROGUESS)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetZeroGuess(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetNonZeroGuess
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsetnonzerogue, HYPRE_SSTRUCTSPLITSETNONZEROGUE)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetNonZeroGuess(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver) ));
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitSetStructSolver
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitsetstructsolv, HYPRE_SSTRUCTSPLITSETSTRUCTSOLV)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *ssolver,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitSetStructSolver(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassInt (ssolver) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitGetNumIterations
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitgetnumiterati, HYPRE_SSTRUCTSPLITGETNUMITERATI)
   (hypre_F90_Obj *solver,
    hypre_F90_Int *num_iterations,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitGetNumIterations(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassIntRef (num_iterations) ) );
}

/*--------------------------------------------------------------------------
 *  HYPRE_SStructSplitGetFinalRelativeResidualNorm
 *--------------------------------------------------------------------------*/

void
hypre_F90_IFACE(hypre_sstructsplitgetfinalrelat, HYPRE_SSTRUCTSPLITGETFINALRELAT)
   (hypre_F90_Obj *solver,
    hypre_F90_Dbl *norm,
    hypre_F90_Int *ierr)
{
   *ierr = (hypre_F90_Int)
      (HYPRE_SStructSplitGetFinalRelativeResidualNorm(
          hypre_F90_PassObj (HYPRE_SStructSolver, solver),
          hypre_F90_PassDblRef (norm) ) );
}
