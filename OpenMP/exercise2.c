/*
Create a parallel version of a program that computes PI using OpenMP parallel construct
*/
#include<stdio.h>
#include<omp.h>
#define NUM_THREADS 2

static long num_steps=100000;
double step;

int main()
{
    int num_threads;
    double pi=0.0;
    double sum[NUM_THREADS];
    step = 1.0/(double) num_steps;
    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel
    {
        int i;
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();
        if(id == 0)
        {
            num_threads = nt;
        }
        sum[id] = 0;
        double x;
        for(i=id;i<num_steps;i+=nt)
        {
            x = (i + 0.5) * step;
            sum[id] += 4.0/(1.0+x*x);
        }
    }
    
    for(int i=0;i<num_threads;i++)
    {
        pi += sum[i]*step;
    }
    printf("The value of pi is: %f\n",pi);
    return 0;
}
