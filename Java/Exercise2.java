/*
 * Create and start additional thread extending Thread class 
 */

public class Exercise2 {
	public static void main(String[] args){
		System.out.println("Creating Threads using Threads");
		Thread t1 = new ChildThread();
		Thread t2 = new ChildThread();
		t1.start();
		t2.start();
	}
}

class ChildThread extends Thread{
	@Override
	public void run() {
		Thread t = Thread.currentThread();
		System.out.println("Thread Name: " + t.getName());
		System.out.println("Thread ID: " + t.getId());
		System.out.println("Thread Priority: " + t.getPriority());
	}
}
