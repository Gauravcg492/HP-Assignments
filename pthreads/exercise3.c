/*
* Calculate matrix multiplication using pthreads
*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#define ORDER 4
int **A;
int **B;
int **C;

typedef struct vars
{
    int n;
    int id;
} vars;

void *multiply(void *args)
{
    //printf("Starting thread\n");
    vars *var = (vars *)args;
    //printf("Conversion successful\n");
    int n = var->n;
    int id = var->id;
    //printf("Got vars %d & %d\n", n, id);
    for (int i = id * ORDER / n; i < (id + 1) * ORDER / n; i++)
        for (int j = 0; j < ORDER; j++)
            for (int k = 0; k < ORDER; k++)
            {
                //printf("Summing %d %d %d\n",i,j,k);
                C[i][j] += A[i][k] * B[k][j];
            }
}

int main(int argc, char **argv)
{
    setbuf(stdout, NULL);
    pthread_t *threads;
    int n = 2;
    
    clock_t t;
    if (argc > 1)
    {
        n = atoi(argv[1]);
    }
    threads = (pthread_t *)malloc(sizeof(pthread_t) * n);

    A = (int **)malloc(sizeof(int) * ORDER);
    B = (int **)malloc(sizeof(int) * ORDER);
    C = (int **)malloc(sizeof(int) * ORDER);

    for (int i = 0; i < ORDER; i++)
    {
        A[i] = (int *)malloc(sizeof(int) * ORDER);
        B[i] = (int *)malloc(sizeof(int) * ORDER);
        C[i] = (int *)malloc(sizeof(int) * ORDER);
        for (int j = 0; j < ORDER; j++)
        {
            A[i][j] = 5;
            B[i][j] = 3;
            C[i][j] = 0;
        }
    }
    printf("Starting Parallel multiplication with %d threads\n", n);
    t = clock();
    for (int i = 0; i < n; i++)
    {
        vars *var = (vars*)malloc(sizeof(vars));
        var->id = i;
        var->n = n;
        pthread_create(&threads[i], NULL, multiply, (void *)var);
        //printf("Started one thread\n");
    }

    for (int i = 0; i < n; i++)
    {
        pthread_join(threads[i], NULL);
    }
    t = clock() - t;
    printf("Total time taken %f\n", (double)t / CLOCKS_PER_SEC);
    return 0;
}