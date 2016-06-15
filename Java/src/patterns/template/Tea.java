package patterns.template;

public class Tea extends CaffeineBeverage {
	public void steepTeaBag() {
		System.out.println("Steep Tea Bag.");
	}
	
	public void addLemon() {
		System.out.println("Add Lemon in Tea.");
	}

	@Override
	public void brew() {
		steepTeaBag();
	}

	@Override
	public void addCondiments() {
		addLemon();
	}
}
