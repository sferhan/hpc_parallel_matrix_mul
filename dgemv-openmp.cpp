#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include "helpers.cpp"

const char* dgemv_desc = "OpenMP dgemv.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */

void my_dgemv(int n, double* A, double* x, double* y) {
   #pragma omp parallel for
   for(int i=0; i<n; i++) {
      int start_of_row = i * n;
      double val_for_yi = 0;
      for(int j=0; j<n; j++) {
         val_for_yi += (A[start_of_row + j] * x[j]);
      }
      y[i] += val_for_yi;
   }
}

