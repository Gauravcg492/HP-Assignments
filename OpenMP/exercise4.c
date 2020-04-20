/*
Parallelise PI program using loop construct
*/
#include<stdio.h>
#include<omp.h>

static long num_steps=100000;
double step;

int main()
{
    int i;
    double pi;
    double sum=0.0;
    step = 1.0/(double) num_steps;

    #pragma omp parallel
    {
        double x;
        #pragma omp for reduction(+:sum)
        for(i=0;i<num_steps;i++)
        {
            x = (i + 0.5) * step;
            sum += 4.0/(1.0+x*x);
        }
    }
    pi = sum*step;
    printf("The value of pi is: %f\n",pi);
    return 0;
}
