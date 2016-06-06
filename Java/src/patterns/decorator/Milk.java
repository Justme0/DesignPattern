package patterns.decorator;

public class Milk extends Decorator {
	private Beverage beverage;
	
	Milk(Beverage beverage) {
		this.beverage = beverage;
	}
	
	@Override
	public String getDescriptor() {
		return beverage.getDescriptor() + ", Milk";
	}

	@Override
	public float cost() {
		return beverage.cost() + 0.15f;
	}
}
