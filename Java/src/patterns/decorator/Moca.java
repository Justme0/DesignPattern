package patterns.decorator;

public class Moca extends Decorator {
	private Beverage beverage;
	
	Moca(Beverage beverage) {
		this.beverage = beverage;
	}
	
	@Override
	public String getDescriptor() {
		return beverage.getDescriptor() + ", Moca";
	}

	@Override
	public float cost() {
		return beverage.cost() + 0.2f;
	}
}
