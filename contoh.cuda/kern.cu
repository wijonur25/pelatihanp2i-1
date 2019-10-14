#include <stdio.h>
#include <cuda_runtime.h>

// tugas 1: alokasi memori dan transfer dari device ke host

__global__ void
kern(int *A)
{
    	int idx = blockDim.x * blockIdx.x + threadIdx.x;
 	A[idx] = idx;
}

/**
 * Host main routine
 */
int   main(void)
{
	// alokasikan memori, dan salin nilainya
	dim3 grid,block;
	block.x = 4;
	grid.x = 12/block.x;
	//kern<<grid,block>>(d_A);
	// copy result
	return 0;
}
