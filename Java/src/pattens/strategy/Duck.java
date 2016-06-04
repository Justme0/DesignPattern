package pattens.strategy;

public abstract class Duck {
	public Duck () {
		System.out.println("Create a new Duck().");
	}
	
	public void quack() {
		System.out.println("quack, quack, quack.");
	}
	
	public void swim() {
		System.out.println("swim, swim, swim.");
	}
	
	public void fly() {
		System.out.println("fly, fly, fly.");
	}
	
	abstract void display();
}
