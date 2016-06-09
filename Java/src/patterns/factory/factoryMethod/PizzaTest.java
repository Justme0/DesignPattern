package patterns.factory.factoryMethod;

public class PizzaTest {
	public static void main(String argv[]) {
		PizzaStore store = new NewYorkPizzaStore();
		store.orderPizza("Chees");
		store.orderPizza("Clam");
		store = new ChicagoPizzaStore();
		store.orderPizza("Chees");
		store.orderPizza("Clam");
	}
}
