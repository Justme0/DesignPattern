package patterns.factory.abstractFactory;

public class CheessPizza extends Pizza {
	public CheessPizza(PizzaIngredientFactory ingredientFactory, String name) {
		this.ingredientFactory = ingredientFactory;
		this.name = name;
	}
	
	public void prepare() {
		System.out.println("Preparing: " + name);
		dough = ingredientFactory.createDough();
		System.out.println(dough.toString());
	}
}
