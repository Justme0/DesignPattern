package patterns.template;

public class Coffe {
	public void prepare() {
		boilWater();
		brewCoffeGrinds();
		pourInCup();
		addMilk();
	}
	
	public void boilWater() {
		System.out.println("Boiling Water.");
	}
	
	public void brewCoffeGrinds() {
		System.out.println("Brew Coffe Grinds.");
	}
	
	public void pourInCup() {
		System.out.println("Pour in Cup.");
	}
	
	public void addMilk() {
		System.out.println("Add Milk in Coffe.");
	}
}
