package patterns.composite.iterator;

import java.util.ArrayList;
import java.util.Iterator;

public class Menu extends MenuComponent {
	private ArrayList<MenuComponent> menuComponents = new ArrayList<MenuComponent>();
	private String name;
	private String description;
	
	public Menu(String name, String description) {
		this.name = name;
		this.description = description;
	}
	
	public void add(MenuComponent component) {
		menuComponents.add(component);
	}
	
	public String getName() {
		return name;
	}
	
	public String getDescription() {
		return description;
	}
	
	public void print() {
		System.out.println("Menu: " + getName() + ", " + getDescription());
	}

	@Override
	public Iterator<MenuComponent> createIterator() {
		return new MenuComponentIterator(menuComponents.iterator());
	}
}
