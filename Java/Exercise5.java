/*
 * Illustrate joining of threads
 */

public class Exercise5 {
	public static void main(String[] args) throws InterruptedException {
		Thread[] threads = new Thread[5];
		for(int i=0;i<threads.length;i++)
		{
			threads[i] = new Thread(new ChildJoinThread());
			threads[i].start();
		}
		
		for(int i=0; i<threads.length; i++)
		{
			threads[i].join();
		}
		
		System.out.println("All threads joined!");
	}
}

class ChildJoinThread implements Runnable{
	@Override
	public void run() {
		Thread t = Thread.currentThread();
		System.out.printf("Thread %s Starting...\n",t.getName());
		try {
			Thread.sleep(5000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
			//System.out.printf("Thread %s interrupted and awake!\n",t.getName());
		}
		System.out.printf("Thread %s Finished!\n",t.getName());
	}
}