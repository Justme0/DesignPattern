package patterns.template;

public class Coffe extends CaffeineBeverage {
	public void brewCoffeGrinds() {
		System.out.println("Brew Coffe Grinds.");
	}
	
	public void addMilk() {
		System.out.println("Add Milk in Coffe.");
	}

	@Override
	public void brew() {
		brewCoffeGrinds();
	}

	@Override
	public void addCondiments() {
		addMilk();
	}
}
