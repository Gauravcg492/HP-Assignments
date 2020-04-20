#Priority queue multithreading python (low value of priorirty means less priority)
from queue import PriorityQueue
import threading
import random

class MultiPriorityQueue:
    def __init__(self):
        self.queue = PriorityQueue()
        self.lock = threading.Lock()
    
    def pop(self):
        #pop
        self.lock.acquire()
        if(not self.queue.empty()):
            ele = self.queue.get()
            print(threading.current_thread().getName()," popped element ",ele)
        else:
            print("Queue empty")    
        self.lock.release()
    
    def push(self, priority, value):
        #push
        self.lock.acquire()
        self.queue.put((priority,value))
        print(threading.current_thread().getName()," added element {} with priority {} ".format(value, priority))
        self.lock.release()


if __name__ == "__main__":
    pq = MultiPriorityQueue()
    threads = []
    for i in range(0, 10):
        if (i % 2):
            threads.append(threading.Thread(target=pq.push, args=(random.randint(1,10), random.randint(1,100))))
        else:
            threads.append(threading.Thread(target=pq.pop))
        threads[i].start()

    for thread in threads:
        thread.join()