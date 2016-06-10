package patterns.factory.factoryMethod;

public class ChicagoPizzaStore extends PizzaStore {
	@Override
	public Pizza createPizza(String type) {
		Pizza pizza = null;
		
		System.out.println("##########This is a new Pizza " + type + " for ChicagoPizzaStore.##########");
		if(type.equals("Cheese")) {
			pizza = new ChicagoCheesePizza();
		}
		else if(type.equals("Clam")) {
			pizza = new ChicagoClamPizza();
		}
		else {
			System.out.println("What is this? v_v");
		}
		return pizza;
	}
}
