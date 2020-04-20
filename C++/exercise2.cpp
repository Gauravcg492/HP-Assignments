/*
* Producer Consumer problem using bounded buffer
*/
#include<iostream>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<mutex>
#include<condition_variable>
#define PRODUCE 10
#define BOUND 5

using namespace std;

mutex mlock;
mutex qlock;
queue<int> buffer;
condition_variable emptyq;
condition_variable fullq;

void consumer(){
    int consumed = 0;
    while(1){
        unique_lock<mutex> lk(mlock);
        qlock.lock();
        if(buffer.size() == 0){
            qlock.unlock();
            fullq.wait(lk);
        }
        cout<<"Consumer deleting element."<<endl;
        buffer.pop();
        qlock.unlock();
        if(++consumed == PRODUCE) break;
        emptyq.notify_one();                
    }
    cout<<"Consumer completed!"<<endl;

}

void producer(){
    int produced = 0;
    while(1){
        unique_lock<mutex> lk(mlock);
        qlock.lock();
        if(buffer.size() == 5){
            qlock.unlock();
            emptyq.wait(lk);
        }
        cout<<"Producer adding element."<<endl;
        buffer.push(rand()%1000);
        qlock.unlock();
        if(++produced == PRODUCE) break;
        fullq.notify_one();                
    }
    cout<<"Producer completed!"<<endl;
}

int main(){
    srand(time(NULL));

    thread prod(producer);
    thread cons(consumer);

    prod.join();
    cons.join();

    return 0;
}