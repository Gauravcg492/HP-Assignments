/*
* Sleeping barber problem
*/

#include<iostream>
#include<thread>
#include<bits/stdc++.h>
#include<mutex>
#include <semaphore.h> 
#include<condition_variable>
#include<unistd.h>
#define TOTAL 10
#define SEATS 3

using namespace std;

int free_seats = SEATS;

sem_t cust;
sem_t barb;
mutex seat_lock;

void barber(){
    int served = 0;
    cout<<"Barber created."<<endl;
    while(1){
        sem_wait(&cust);
        seat_lock.lock();
        free_seats++;
        cout<<"Serviced a customer."<<endl;
        seat_lock.unlock();
        sem_post(&barb);
        
        if(++served == TOTAL){
            break;
        }
    }

}

void customer(int id){
    cout<<"Customer "<<id<<" arriving."<<endl;
    while (1)
    {
        seat_lock.lock();
        if(free_seats > 0)
        {
            free_seats--;
            seat_lock.unlock();
            sem_post(&cust);
            sem_wait(&barb);
            cout<<"Cutomer "<<id<<" left."<<endl;
            //break;
        } else
        {
            seat_lock.unlock();
        }
    }
} 

int main()
{
    sem_init(&barb,0, 0);
    sem_init(&cust,0, 0);
    vector<thread> threads;

    threads.push_back(thread(barber));

    for(int i=0;i<TOTAL;i++)
    {
        threads.push_back(thread(customer,i));
    }

    for(thread& th: threads){
        th.join();
    }

    return 0;
}