package patterns.iterator;

public class MenuTest {

	public static void main(String[] args) {
		Menu cafeMenu = new CafeMenu();
		Menu pancakeHouseMenu = new PancakeHouseMenu();
		Menu dinerMenu = new DinerMenu();
		Waitress waitress = new Waitress(cafeMenu, dinerMenu, pancakeHouseMenu);
		waitress.printMenu();
	}
}
