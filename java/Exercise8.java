import java.util.LinkedList;
import java.util.Queue;
/*
 * Create a single producer and consumer for a queue
 */
import java.util.Random;
public class Exercise8 {
	private static final Queue<Integer> queue = new LinkedList<Integer>();
	private static final Random random = new Random();
	
	public static void main(String[] args) throws InterruptedException {
		
		Thread t1 = new Thread(new Consumer(queue));
		Thread t2 = new Thread(new Producer(queue, random.nextInt(10000)));
		t1.start();
		t2.start();
		t1.join();
		t2.join();
	}

}

class Producer implements Runnable{
	Queue<Integer> queue;
	private int integer;
	public Producer(Queue<Integer> queue, int integer) {
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

class Consumer implements Runnable{
	Queue<Integer> queue;
	
	public Consumer(Queue<Integer> queue) {
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
