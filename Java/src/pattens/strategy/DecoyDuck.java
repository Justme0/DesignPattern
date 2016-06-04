package pattens.strategy;

public class DecoyDuck extends Duck {
	public void display() {
		System.out.println("This is a DecoyDuck.");
	}
	
	public void quack() {
		System.out.println("Can't quack, just fake quack.");
	}
	
	public void fly() {
		System.out.println("Can't fly, noting to do.");
	}
}
