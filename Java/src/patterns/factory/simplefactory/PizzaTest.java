package patterns.factory.simplefactory;

public class PizzaTest {
	public static void main(String argv[]) {
		SimplePizzaFactory factory = new SimplePizzaFactory();
		PizzaStore store = new PizzaStore(factory);
		store.orderPizza("Chees");
		store.orderPizza("Clam");
	}
}
