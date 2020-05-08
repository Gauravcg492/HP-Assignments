/*
* Program to calculate pi in parallel
*/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

static long num_steps = 100000;

typedef struct vars{
    int id;
    double step;
    int n;
} vars;

void *calcPi(void *args)
{   
    //printf("Thread created\n");
    vars *var = (vars*) args;
    double *sum = (double*)malloc(sizeof(double));
    *sum = 0.0;
    double x;
    for(int i=var->id;i<num_steps;i+=var->n)
    {
        x = (i + 0.5) * var->step;
        *sum += 4.0/(1.0+x*x);
    }
    *sum *= var->step;
    //printf("Sending %f\n", *sum);
    return (void *) sum;
    //pthread_exit(&sum);
}

int main(int argc, char** argv)
{
    pthread_t *threads;
    int n = 2;
    void *sum;
    double pi = 0.0;
    double step = 1.0/(double) num_steps;

    if(argc > 1)
    {
        n = atoi(argv[1]);
    }

    threads = (pthread_t*)malloc(sizeof(pthread_t)*n);

    for(int i=0;i<n;i++)
    {
        vars *var = (vars*)malloc(sizeof(vars));
        var->id = i;
        var->n = n;
        var->step = step;
        pthread_create(&threads[i], NULL, calcPi, (void*)var);
    }

    for(int i=0;i<n;i++)
    {
        pthread_join(threads[i], &sum);
        //printf("Received sum %f\n", *(double*)sum);
        pi += *((double*)sum);
    }

    printf("The value of pi is %f\n", pi);
    return 0;
}