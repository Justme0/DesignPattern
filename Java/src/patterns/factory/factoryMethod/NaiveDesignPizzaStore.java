package patterns.factory.factoryMethod;

public class NaiveDesignPizzaStore {
	public Pizza createPizza(String style, String type) {
		Pizza pizza = null;
		if (style.equals("NY")) {
			if (type.equals("cheese")) {
				pizza = new NewYorkCheesePizza();			
			} else if (type.equals("clam")) {
				pizza = new NewYorkClamPizza();			}
		} else if (style.equals("Chicago")) {
			if (type.equals("cheese")) {
				pizza = new ChicagoCheesePizza();
			} else if (type.equals("clam")) {
				pizza = new ChicagoClamPizza();
			}
		} else {
			System.out.println("What is this? v_v");
			return null;
		}
		pizza.prepare();
		pizza.bake();
		pizza.cut();
		pizza.box();
		return pizza;
	}
}
