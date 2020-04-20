/*
 * repeat exercises six above with coarse and fine grained synchronization and observe and plot impact on speed.
 */

import java.time.Duration;
import java.time.Instant;

public class Exercise7 {
	public static void main(String[] args) throws InterruptedException {
		if (args.length < 1){
            System.out.println("Enter NUM_THREADS in command line args");
            return;
        }
		Thread[] threads = new Thread[Integer.parseInt(args[0])];
		int amount = 500;
		Instant start = Instant.now();
		for(int i=0;i<threads.length;i++) {
			if(i%2 == 0) {
				threads[i] = new Thread(new Customers(amount));
				threads[i].start();
			} else {
				threads[i] = new Thread(new Customers(-1*amount));
				threads[i].start();
			}
		}
		
		for(int i=0;i<threads.length;i++)
		{
			threads[i].join();
		}
		long time = Duration.between(start, Instant.now()).toMillis();
		System.out.printf("Balance=%d\n", Customers.balance);
		System.out.printf("Time taken: %d\n",time);
	}
}

class Customers implements Runnable{
	static int balance=10000;
	int amount;
	Customers(int amount){
		this.amount = amount;
	}
	@Override
	public synchronized void run() {
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