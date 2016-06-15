package patterns.template;

public class Tea {
	public void prepare() {
		boilWater();
		steepTeaBag();
		pourInCup();
		addLemon();
	}
	
	public void boilWater() {
		System.out.println("Boiling Water.");
	}
	
	public void steepTeaBag() {
		System.out.println("Steep Tea Bag.");
	}
	
	public void pourInCup() {
		System.out.println("Pour in Cup.");
	}
	
	public void addLemon() {
		System.out.println("Add Lemon in Tea.");
	}
}
