package pattens.strategy;

public class RubberDuck extends Duck {
	public void display() {
		System.out.println("This is a RubberDuck.");
	}
	
	public void quack() {
		System.out.println("squeak, squeak, squeak.");
	}
	
	public void fly() {
		System.out.println("Can't fly, noting to do.");
	}
}
