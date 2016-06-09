package patterns.factory.simpleFactory;

public class SimplePizzaFactory {
	public Pizza createPizza(String type) {
		Pizza pizza = null;
		System.out.println("New order: " + type);
		if(type.equals("Chees")) {
			pizza = new CheesPizza();
		}
		else if(type.equals("Clam")) {
			pizza = new ClamPizza();
		}
		return pizza;
	}
}
