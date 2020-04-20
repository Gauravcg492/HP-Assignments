#include "reference_calc.cpp"
#include "utils.h"
#include <stdio.h>

__global__
void rgba_to_greyscale(const uchar4* const rgbaImage,
                       unsigned char* const greyImage,
                       int numRows, int numCols)
{
      int x = threadIdx.x;
      int y = threadIdx.y;
      int x_block = blockIdx.x;
      int y_block = blockIdx.y;

      int x_bdim = blockDim.x;
      int y_bdim = blockDim.y;
      int x_gdim = gridDim.x;
      int y_gdim = gridDim.y;

      int x_pos = x_bdim * x_block * x;
      int y_pos = y_bdim * y_block *y;

      int offset =  y_pos * (x_bdim * x_gdim) + x_pos;

      uchar4 rgba = rgbaImage[offset];  //r * numCols + c
      float channelSum = .299f * rgba.x + .587f * rgba.y + .114f * rgba.z;
      greyImage[offset] = channelSum;

}

void your_rgba_to_greyscale(const uchar4 * const h_rgbaImage, uchar4 * const d_rgbaImage,
                            unsigned char* const d_greyImage, size_t numRows, size_t numCols)
{

  const dim3 blockSize(numRows/16+1, numCols/16+1, 1); 
  const dim3 gridSize( 16, 16, 1); 
  rgba_to_greyscale<<<gridSize, blockSize>>>(d_rgbaImage, d_greyImage, numRows, numCols);

  cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
}