package patterns.decorator;

public class Espresso extends Beverage {
	Espresso() {
		descriptor = "Espresso";
	}
	
	@Override
	public float cost() {
		return 1.0f;
	}
}
