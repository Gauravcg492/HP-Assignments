/*
* Dining Philosophers Problem
*/

#include<iostream>
#include<thread>
#include<bits/stdc++.h>
#include<mutex>
#define NUM_PHI 5

using namespace std;

mutex *chopsticks;

void philosopher(int id){
    int first;
    int second;
    int rounds = 0;
    if(id%2 == 0)
    {
        first = (id+1)%5;
        second = id;
    } else{
        first = id;
        second = (id+1)%5;
    }
    cout<<"Philosopher "<<id<<" Entered."<<endl;
    while(1){
        chopsticks[first].lock();
        chopsticks[second].lock();
        cout<<"Philosopher "<<id<<" eating."<<endl;
        chopsticks[first].unlock();
        chopsticks[second].unlock();
        cout<<"Philosopher "<<id<<" thinking."<<endl;
        if(++rounds == 10)
        {
            break;
        }
    }   
    cout<<"Philosopher "<<id<<" left."<<endl;
    return;
}


int main(){
        vector<thread> threads;
        chopsticks = (mutex*)malloc(sizeof(mutex)*NUM_PHI);
        for(int i=0;i<NUM_PHI;i++)
        {
            threads.push_back(thread(philosopher,i));
        }

        for(thread& th : threads){
            th.join();
        }
        return 0;
}
