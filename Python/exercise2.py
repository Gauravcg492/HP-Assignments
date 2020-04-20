# Banking example in python
import threading

# Declraing a lock
lock = threading.Lock()

MIN_BALANCE = 100
BALANCE = 10000


def withdraw(w_amt):
    lock.acquire()
    global BALANCE
    if (BALANCE - w_amt) < 100:
        print("Balance not sufficient!")
    else:
        BALANCE = BALANCE - w_amt
        print("Successful Withdrawal!")
    lock.release()


def deposit(d_amt):
    global BALANCE
    lock.acquire()
    BALANCE = BALANCE + d_amt
    print("Successful Deposit!")
    lock.release()


if __name__ == "__main__":
    threads = []
    for i in range(0, 10):
        if (i % 2):
            threads.append(threading.Thread(target=deposit, args=(100,)))
        else:
            threads.append(threading.Thread(target=withdraw, args=(100,)))
        
        threads[i].start()
    for thread in threads:
        thread.join()
    print("Total Balance: ",BALANCE)