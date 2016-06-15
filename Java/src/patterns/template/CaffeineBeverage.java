package patterns.template;

public abstract class CaffeineBeverage {
	final void prepare() {
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}
	
	public void boilWater() {
		System.out.println("Boiling Water.");
	}
	
	public void pourInCup() {
		System.out.println("Pour in Cup.");
	}
	
	public abstract void brew();
	
	public abstract void addCondiments();
}
