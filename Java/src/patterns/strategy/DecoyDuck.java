package patterns.strategy;

public class DecoyDuck extends Duck {
	public DecoyDuck() {
		flyBehavior = new FlyCannot();
		soundBehavior = new Silence();
	}
	
	public void display() {
		System.out.println("This is a DecoyDuck.");
	}
}
