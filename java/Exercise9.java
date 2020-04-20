import java.util.LinkedList;
import java.util.Queue;
/*
 * Create a multiple producer and consumer for a queue
 */
import java.util.Random;
public class Exercise9 {
	private static final Queue<Integer> queue = new LinkedList<Integer>();
	private static final Random random = new Random();
	
	public static void main(String[] args) throws InterruptedException {
		
		Thread[] threads = new Thread[10];
		for(int i=0;i<threads.length;i++) {
			if(i%2 == 0) {
				threads[i] = new Thread(new Consumer(queue));
			} else {
				threads[i] = new Thread(new Producer(queue, random.nextInt(10000)));
			}
			threads[i].start();
		}
		
		for(int i=0;i<threads.length;i++) {
			threads[i].join();
		}
	}

}

class Producers implements Runnable{
	Queue<Integer> queue;
	private int integer;
	public Producers(Queue<Integer> queue, int integer) {
		// TODO Auto-generated constructor stub
		this.queue = queue;
		this.integer = integer;
	}
	
	
	@Override
	public void run() {
		// TODO Auto-generated method stub
		synchronized (queue) {
			queue.add(integer);
			System.out.printf("Thread %s added %d\n", Thread.currentThread().getName(),integer);
			queue.notify();
		}
		
	}
}

class Consumers implements Runnable{
	Queue<Integer> queue;
	
	public Consumers(Queue<Integer> queue) {
		// TODO Auto-generated constructor stub
		this.queue = queue;
	}
	
	@Override
	public void run() {
		// TODO Auto-generated method stub
		synchronized (queue) {
			while(queue.isEmpty()) {
				try {
					queue.wait();
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
			Integer integer = queue.poll();
			System.out.printf("Thread %s got %d\n", Thread.currentThread().getName(),integer);
		}
		
	}
	
	
}
