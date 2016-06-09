package patterns.factory.factoryMethod;

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
		System.out.println("Normal Preparing pizza: " + name);
	}
	
	public void bake() {
		System.out.println("Normal Baking pizza: " + name);
	}
	
	public void cut() {
		System.out.println("Normal Cutting pizza: " + name);
	}
	
	public void box() {
		System.out.println("Normal boxing pizza: " + name);
	}
}
