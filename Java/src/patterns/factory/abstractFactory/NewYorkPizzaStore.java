package patterns.factory.abstractFactory;

public class NewYorkPizzaStore extends PizzaStore {

	@Override
	public Pizza createPizza(String type) {
		Pizza pizza = null;
		PizzaIngredientFactory ingredientFactory = new NewYorkPizzaIngredientFactory();
		System.out.println("new pizza for " + type + " in NewYorkPizzaStore.");
		if(type.equals("Cheess")) {
			pizza = new CheessPizza(ingredientFactory, "NewYorkCheessPizza");
		}
		return pizza;
	}
}
