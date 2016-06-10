package patterns.factory.abstractFactory;

public abstract class Pizza {
	protected PizzaIngredientFactory ingredientFactory;
	protected String name;
	protected Dough dough;
	
	public abstract void prepare();
	
	public void bake() {
		System.out.println("Normal Baking: " + name);
	}
	
	public void cut() {
		System.out.println("Normal Cutting: " + name);
	}
	
	public void box() {
		System.out.println("Normal Boxing: " + name);
	}
}
