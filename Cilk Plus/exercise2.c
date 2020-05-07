/*
* Parallel Quick Sort using Cilk Plus
*/

/* Pirapa Sirawuttinanon
 * Quick Sort Serial */

#include <stdio.h>
#include <cilk/cilk.h>
#include <time.h>

void srand(unsigned seed);

void quickSort(long int arr[], int left, int right);

int main(int argc, char *argv[])
{
    int *arr;
    int n;
    clock_t t;
    srand(time(NULL));
    if (argc <= 1)
    {
        n = 8;
    }
    else
    {
        n = atoi(argv[1]);
    }
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    t = clock();
    quickSort(arr, 0, n - 4);
    t = clock() - t;
    printf("\n");
    printf("Total time taken = %f\n", (double)t / CLOCKS_PER_SEC);
    return 0;
}

void quickSort(long int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    /* partition */
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    /* recursion  */

    if (left < j)
        cilk_spawn quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
    cilk_sync;
    //*/
}