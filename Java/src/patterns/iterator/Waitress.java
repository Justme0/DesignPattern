package patterns.iterator;

import java.util.Iterator;

public class Waitress {
	private Menu cafeMenu;
	private Menu dinerMenu;
	private Menu pancakeHouseMenu;
	
	public Waitress(Menu cafeMenu, Menu dinerMenu, Menu pancakeHouseMenu) {
		this.cafeMenu = cafeMenu;
		this.dinerMenu = dinerMenu;
		this.pancakeHouseMenu = pancakeHouseMenu;
	}
	
	public void printMenu() {
		Iterator cafeIterator = cafeMenu.createIterator();
		Iterator dinerIterator = dinerMenu.createIterator();
		Iterator pancakeIterator = pancakeHouseMenu.createIterator();
		System.out.println("##### Cafe Menu ######");
		printMenu(cafeIterator);
		System.out.println("##### Diner Menu ######");
		printMenu(dinerIterator);
		System.out.println("##### PancakeHouse Menu ######");
		printMenu(pancakeIterator);
	}
	
	private void printMenu(Iterator it) {
		while(it.hasNext()) {
			MenuItem item = (MenuItem)it.next();
			System.out.println(item.getName() + ", " + item.getDescription() + "," + item.getPrice());
		}
	}
}
