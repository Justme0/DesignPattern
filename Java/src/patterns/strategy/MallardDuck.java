package patterns.strategy;

public class MallardDuck extends Duck {
	public MallardDuck() {
		flyBehavior = new FlyWithWings();
		soundBehavior = new Quack();
	}
	
	public void display() {
		System.out.println("This is a MallardDuck.");
	}
}
