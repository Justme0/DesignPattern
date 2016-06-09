package patterns.factory.factoryMethod;

public class NewYorkClamPizza extends Pizza {
	public NewYorkClamPizza() {
		name = "New York Clam Pizza";
		dough = "Thin crust";
		sauce = "White garlic sauce";
		toppings.add("Clams");
		toppings.add("Grated parmesan cheese");
	}
}
