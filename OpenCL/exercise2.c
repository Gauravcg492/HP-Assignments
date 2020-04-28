#include<stdio.h>
#include<stdlib.h>
#include<CL/opencl.h>
#define MAX_SOURCE_SIZE (0x100000)
/*
* Exercise to add two vectors
*/
int main( int argc, char* argv[])
{
    unsigned int n;
    if(argc > 1)
    {
        n = (int)argv[1];
    } else {
        n = 1000;
    }

    FILE *fp;
    char *source_str;
    size_t source_size;

    fp = fopen("mmul.cl", "r");
    if (!fp) {
        fprintf(stderr, "Failed to load kernel.\n");
        exit(1);
    }
    source_str = (char*)malloc(MAX_SOURCE_SIZE);
    source_size = fread( source_str, 1, MAX_SOURCE_SIZE, fp);
    fclose( fp );


    //host arrays
    int *h_a;
    int *h_b;
    int *h_c;

    //device arrays
    cl_mem d_a;
    cl_mem d_b;
    cl_mem d_c;

    cl_platform_id cpPlatform;
    cl_device_id dev_id;
    cl_context context;
    cl_command_queue queue;
    cl_program program;
    cl_kernel kernel;

    size_t bytes = n*n*sizeof(int);

    h_a = (int*)malloc(bytes);
    h_b = (int*)malloc(bytes);
    h_c = (int*)malloc(bytes);

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            a[i][j] = 10;
            b[i][j] = 5;
        }        
    }

    cl_int err;
    size_t globalSize[2] = {n, n};
    localSize[2] = {32, 32};

    globalSize = ceil(n/(float)localSize)*localSize;

    err = clGetPlatformIDs(1, &cpPlatform, NULL);

    err = clGetDeviceIDs(cpPlatform, CL_DEVICE_TYPE_GPU, 1, &dev_id, NULL);

    context = clCreateContext(0, 1, &dev_id, NULL, NULL, &err);

    queue = clCreateCommandQueue(context, dev_id, 0, &err);

    program = clCreateProgramWithSource(context, 1, (const char*)&source_str, (const size_t*)&source_size, &err);

    clBuildProgram(program, 0, NULL, NULL, NULL, NULL);

    kernel = clCreateKernel(program, "multiply", &err);

    d_a = clCreateBuffer(context, CL_MEM_READ_ONLY, bytes, NULL, NULL);
    d_b = clCreateBuffer(context, CL_MEM_READ_ONLY, bytes, NULL, NULL);
    d_c = clCreateBuffer(context, CL_MEM_READ_ONLY, bytes, NULL, NULL);

    err = clEnqueueWriteBuffer(queue, d_a, CL_TRUE, 0, bytes, h_a, 0, NULL, NULL);
    err |= clEnqueueWriteBuffer(queue, d_b, CL_TRUE, 0, bytes, h_b, 0, NULL, NULL);

    err = clSetKernelArg(kernel, 0, sizeof(unsigned int), &n);
    err |= clSetKernelArg(kernel, 1, sizeof(cl_mem), &d_a);
    err |= clSetKernelArg(kernel, 2, sizeof(cl_mem), &d_b);
    err |= clSetKernelArg(kernel, 3, sizeof(cl_mem), &d_c);

    err = clEnqueueNDRangeKernel(queue, kernel, 2, NULL, &globalSize, &localSize, 0, NULL, NULL);

    clFinish(queue);

    clEnqueueReadBuffer(queue, d_c, CL_TRUE, 0, bytes, h_c, 0, NULL, NULL);

    printf("C:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("c[%d,%d] = %d",i,j,h_c[i][j]);
        }
        
    }

    clReleaseMemObject(d_a);
    clReleaseMemObject(d_b);
    clReleaseMemObject(d_c);
    clReleaseProgram(program);
    clReleaseKernel(kernel);
    clReleaseCommandQueue(queue);
    clReleaseContext(context);

    free(h_a);
    free(h_b);
    free(h_c);

    return 0;
}