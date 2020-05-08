/*
* Program to execute threads in certain order by assigning priority to each thread.
*/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sched.h>

void *printThread(void *args)
{
    printf("Thread Started\n");
    int id = *(int*)args;
    //printf("Got id\n");
    printf("Printing from thread %d\n",id);
}

int main()
{
    setbuf(stdout,NULL);
    pthread_t t1,t2;
    struct sched_param param1;
    struct sched_param param2;
    pthread_attr_t attr1, attr2;
    pthread_attr_init(&attr1);
    param1.sched_priority = 2;
    pthread_attr_setschedparam(&attr1, &param1);
    pthread_attr_init(&attr2);
    param2.sched_priority = 1;
    pthread_attr_setschedparam(&attr2, &param2);
    //printf("All atrributes set\n");

    int *arg1 = (int*)malloc(sizeof(int));
    int *arg2 = (int*)malloc(sizeof(int));
    *arg1 = 0; *arg2 = 1;
    pthread_create(&t1, &attr1, printThread, (void *)arg1);
    //printf("Thread Starting\n");
    pthread_create(&t2, &attr2, printThread, (void *)arg2);
    //printf("Thread starting\n");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;

}
