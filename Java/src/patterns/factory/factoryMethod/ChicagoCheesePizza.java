package patterns.factory.factoryMethod;

public class ChicagoCheesePizza extends Pizza {
	public ChicagoCheesePizza() {
		name = "Chicago Cheese Pizza";
		dough = "Regular Crust";
		sauce = "Marinara Pizza Sauce";
		toppings.add("Fresh Mozzarella");
		toppings.add("Parmesan");
	}
}
