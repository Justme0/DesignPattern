package patterns.composite.menu;

public class Waitress {
	private MenuComponent menu;
	
	public Waitress(MenuComponent menu) {
		this.menu = menu;
	}
	
	public void printMenu() {
		menu.print();
	}
}
