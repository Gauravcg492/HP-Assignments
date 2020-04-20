/*
Write a hello world program that makes use of OpenMP multithreading
*/
#include<stdio.h>
#include<omp.h>

int main(){
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("Hello World\nID: %d\n",id);
        printf("Bye Life\nID: %d\n",id);
    }
    return 0;
}