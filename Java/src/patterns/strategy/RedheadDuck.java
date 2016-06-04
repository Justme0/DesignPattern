package patterns.strategy;

public class RedheadDuck extends Duck {
	public RedheadDuck() {
		flyBehavior = new FlyWithWings();
		soundBehavior = new Quack();
	}
	
	public void display() {
		System.out.println("This is a RedheadDuck.");
	}
}
