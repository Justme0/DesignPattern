package patterns.factory.abstractFactory;

public class PizzaTest {
	public static void main(String argv[]) {
		PizzaStore store = new NewYorkPizzaStore();
		store.orderPizza("Cheess");
	}
}
