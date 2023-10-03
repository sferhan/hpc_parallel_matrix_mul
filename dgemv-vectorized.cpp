#include "helpers.cpp"

const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
         y[col_major_transform(i, 0, 1)] += (A[col_major_transform(i, j, n)] * x[col_major_transform(j, 0, 1)]);
      }
   }
}
