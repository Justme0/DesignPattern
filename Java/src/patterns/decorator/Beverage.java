package patterns.decorator;

public abstract class Beverage {
	protected String descriptor;
	
	public String getDescriptor() {
		return descriptor;
	}
	
	public abstract float cost();
	
	public void output() {
		System.out.println("The Beverage has " + getDescriptor() + ", and the cost is " + cost());
	}
}
