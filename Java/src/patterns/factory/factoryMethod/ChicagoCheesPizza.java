package patterns.factory.factoryMethod;

public class ChicagoCheesPizza extends Pizza {
	public ChicagoCheesPizza() {
		name = "Chicago Cheese Pizza";
		dough = "Regular Crust";
		sauce = "Marinara Pizza Sauce";
		toppings.add("Fresh Mozzarella");
		toppings.add("Parmesan");
	}
}
