#include<stdio.h>
#include<stdlib.h>
#include<cilk/cilk.h>
#include<time.h>

int main(int argc, char *argv[])
{
    int n;
    clock_t t;
    int *a, *b,*c,*d;
    double total_time;
    if(argc <= 1)
    {
        n = 8;
    } else
    {
        n = atoi(argv[1]);
    }
    a = (int*)malloc(sizeof(int)*n);
    b = (int*)malloc(sizeof(int)*n);
    c = (int*)malloc(sizeof(int)*n);
    d = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++)
    {
        a[i] = 10;
        b[i] = 5;
    }

    printf("Serial addition: \n");
    t = clock();
    for (int i=0;i<n;i++)
    {
        c[i] = a[i] + b[i];
    }
    t = clock() - t;
    total_time = (double) t/CLOCKS_PER_SEC;
    printf("Total time taken is %f\n",total_time);
    printf("Using Cilk for\n");
    t = clock();
    cilk_for (int i = 0; i < 8; ++i)
    {
        d[i] = a[i] + b[i];
    }
    t = clock() - t;
    total_time = (double) t/CLOCKS_PER_SEC;
    printf("Total time taken is %f\n",total_time);
    return 0;
}
