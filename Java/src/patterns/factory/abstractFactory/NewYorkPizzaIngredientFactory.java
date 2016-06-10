package patterns.factory.abstractFactory;

public class NewYorkPizzaIngredientFactory implements PizzaIngredientFactory {

	@Override
	public Dough createDough() {
		return new NewYorkDough();
	}
}
