/*
 * Create and start additional thread implementing Runnable interface
 */

public class Exercise3 {
	public static void main(String[] args){
		System.out.println("Creating Threads using Runnable");
		Thread t1 = new Thread(new ChildRunThread());
		Thread t2 = new Thread(new ChildRunThread());
		t1.start();
		t2.start();
	}
}

class ChildRunThread implements Runnable{
	@Override
	public void run() {
		Thread t = Thread.currentThread();
		System.out.println("Thread Name: " + t.getName());
		System.out.println("Thread ID: " + t.getId());
		System.out.println("Thread Priority: " + t.getPriority());
	}
}