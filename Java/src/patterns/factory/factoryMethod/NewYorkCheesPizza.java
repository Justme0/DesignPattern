package patterns.factory.factoryMethod;

public class NewYorkCheesPizza extends Pizza {
	public NewYorkCheesPizza() {
		name = "New York Cheese Pizza";
		dough = "Regular Crust";
		sauce = "Marinara Pizza Sauce";
		toppings.add("Fresh Mozzarella");
		toppings.add("Parmesan");
	}
	
	public void bake() {
		System.out.println("Special Baking for Pizza: " + name);
	}
}
