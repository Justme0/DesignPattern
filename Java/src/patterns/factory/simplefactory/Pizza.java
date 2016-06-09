package patterns.factory.simpleFactory;

import java.util.ArrayList;
public abstract class Pizza {
	String name;
	String dough;
	String sauce;
	ArrayList<String> toppings;
	
	Pizza() {
		toppings = new ArrayList<String>();
	}
	
	public void prepare() {
		System.out.println("Preparing pizza: " + name);
	}
}
