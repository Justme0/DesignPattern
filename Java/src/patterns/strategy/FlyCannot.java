package patterns.strategy;

public class FlyCannot implements FlyBehavior {
	public void fly() {
		System.out.println("Can't fly.");
	}
}
