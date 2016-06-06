package patterns.decorator;

public class CaffeStore {
	public static void main (String argv[]) {
		Beverage beverage = new DarkRoast();
		// invalid to decorate a base componment with a base componment
		// beverage = new Espresso(beverage);
		beverage.output();
		beverage = new Espresso();
		beverage.output();
		beverage = new Moca(beverage);
		beverage.output();
		beverage = new Milk(beverage);
		beverage.output();
		beverage = new Soy(beverage);
		beverage.output();
	}
}
