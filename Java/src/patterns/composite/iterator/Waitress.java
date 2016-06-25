package patterns.composite.iterator;

import java.util.Iterator;

public class Waitress {
	private MenuComponent menu;
	
	public Waitress(MenuComponent menu) {
		this.menu = menu;
	}
	
	public void printMenu() {
		// menu.print();
		Iterator<MenuComponent> iterator = menu.createIterator();
		while(iterator.hasNext()) {
			MenuComponent component = iterator.next();
			component.print();
		}
	}
}
