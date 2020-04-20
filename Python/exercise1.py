# Basic python multithreading program

import threading
import time

def hello():
    print("Hello")

def world():
    print("World")

t1 = threading.Thread(target=hello)
t2 = threading.Thread(target=world)

t1.start()
t2.start()

t1.join()
t2.join()