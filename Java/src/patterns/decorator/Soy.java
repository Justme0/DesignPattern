package patterns.decorator;

public class Soy extends Decorator {
	private Beverage beverage;
	
	Soy(Beverage beverage) {
		this.beverage = beverage;
	}
	
	@Override
	public String getDescriptor() {
		return beverage.getDescriptor() + ", Soy";
	}

	@Override
	public float cost() {
		return beverage.cost() + 0.12f;
	}
}
