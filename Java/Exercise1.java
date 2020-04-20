/*
 * Print main thread properties such as ID, name, status etc
 */

public class Exercise1 extends Thread {
	public static void main(String[] args) {
		Thread t = Thread.currentThread();
		System.out.println("Thread Name: " + t.getName());
		System.out.println("Thread ID: " + t.getId());
		System.out.println("Thread Priority: " + t.getPriority());
		System.out.println("Thread ThreadGroup: " + t.getThreadGroup());
		System.out.println("Thread State: " + t.getState());
	}
}
