package patterns.factory.factoryMethod;

public class ChicagoClamPizza extends Pizza {
	public ChicagoClamPizza() {
		name = "Chicago Clam Pizza";
		dough = "Thin crust";
		sauce = "White garlic sauce";
		toppings.add("Clams");
		toppings.add("Grated parmesan cheese");
	}
	
	public void cut() {
		System.out.println("Special Cutting for Pizza: " + name);
	}
}
