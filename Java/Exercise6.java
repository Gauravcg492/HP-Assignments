/*
 * multiple deposits and withdrawal of different values  by different threads (10+)
 * to an account balance implementing correctly and naivly while maintaining a minimum balance of 1000 Rs.
 */

import java.time.Duration;
import java.time.Instant;

public class Exercise6 {
	public static void main(String[] args) throws InterruptedException {
		if (args.length < 1){
            System.out.println("Enter NUM_THREADS in commandline args");
            return;
        }
		Thread[] threads = new Thread[Integer.parseInt(args[0])];
		int amount = 500;
		Instant start = Instant.now();
		for(int i=0;i<threads.length;i++) {
			if(i%2 == 0) {
				threads[i] = new Thread(new Customer(amount));
				threads[i].start();
			} else {
				threads[i] = new Thread(new Customer(-1*amount));
				threads[i].start();
			}
		}
		
		for(int i=0;i<threads.length;i++)
		{
			threads[i].join();
		}
		long time = Duration.between(start, Instant.now()).toMillis();
		System.out.printf("Balance=%d\n", Customer.balance);
		System.out.printf("Time taken: %d\n",time);
	}
}

class Customer implements Runnable{
	static int balance=10000;
	int amount;
	Customer(int amount){
		this.amount = amount;
	}
	@Override
	public void run() {
		synchronized (Customer.class) {
			try {
				if(balance + amount < 1000) {
					throw new Exception();
				} else {
					balance = balance + amount;
				}
			} catch (Exception e) {
				// TODO: handle exception
				System.out.println("Error");
			}
		}
	}
}