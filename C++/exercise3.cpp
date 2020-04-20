/*
* Reader writer problem using c++
*/
#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>

using namespace std;

int counter=0;
int value = 0;

mutex var_lock;
//mutex cv_lock;
mutex count_lock;


void reader(int id){
    count_lock.lock();
    counter++;
    if(counter == 1)
    {
        var_lock.lock();
        //writing.wait(lk);
    } 
    count_lock.unlock();


    //var_lock.lock();
    cout<<"Reader "<<id<<" read the value "<<value<<"."<<endl;
    //var_lock.unlock();
    count_lock.lock();
    counter --;
    if (counter == 0){
        //last reader
        var_lock.unlock();
    }
    count_lock.unlock();

}

void writer(){
    
    var_lock.lock();
    value = rand()%1000;
    cout << "Shared var updated to " << value <<endl;
    var_lock.unlock();
}

int main()
{
    vector<thread> threads;
    threads.push_back(thread(writer));
    for (int i = 0 ; i < 5; i++){
        threads.push_back(thread(reader,i));
    }    

    for(thread& th:threads){
        th.join();
    }

    return 0;
}