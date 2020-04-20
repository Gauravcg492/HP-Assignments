/*
 *  Illustrate thread sleeping and getting interrupted
 */

public class Exercise4 {
	public static void main(String[] args) throws InterruptedException{
		Thread t = Thread.currentThread();
		System.out.println("Starting new thread...");
		Thread t1 = new Thread(new ChildIntThread());
		t1.start();		
		System.out.printf("Thread %s going to sleep for 5s\n",t.getName());
		Thread.sleep(5000);
		System.out.printf("Thread %s awake!\n", t.getName());
		System.out.printf("Waking thread %s by interrupting from thread %s\n",t1.getName(),t.getName());
		t1.interrupt();
		System.out.printf("Thread %s job completed!\n",t.getName());
		
	}
}

class ChildIntThread implements Runnable{
	@Override
	public void run() {
		Thread t = Thread.currentThread();
		System.out.printf("Thread %s going to sleep\n",t.getName());
		try {
			Thread.sleep(Long.MAX_VALUE);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
			System.out.printf("Thread %s interrupted and awake!\n",t.getName());
		}
		System.out.printf("Thread %s job completed!\n",t.getName());
	}
}