package patterns.factory.factoryMethod;

public class NewYorkPizzaStore extends PizzaStore {

	@Override
	public Pizza createPizza(String type) {
		Pizza pizza = null;
		
		System.out.println("###########This is a new Pizza " + type + " for NewYorkPizzaStore.##########");
		if(type.equals("Chees")) {
			pizza = new NewYorkCheesPizza();
		}
		else if(type.equals("Clam")) {
			pizza = new NewYorkClamPizza();
		}
		else {
			System.out.println("What is this? v_v");
		}
		return pizza;
	}
}
