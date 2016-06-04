package pattens.strategy;

public class RubberDuck extends Duck {
	public RubberDuck() {
		flyBehavior = new FlyCannot();
		soundBehavior = new Squeak();
	}
	
	public void display() {
		System.out.println("This is a RubberDuck.");
	}
}
