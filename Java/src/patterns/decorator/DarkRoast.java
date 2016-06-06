package patterns.decorator;

public class DarkRoast extends Beverage {
	DarkRoast() {
		descriptor = "DarkRoast";
	}
	
	@Override
	public float cost() {
		return 0.8f;
	}
}
