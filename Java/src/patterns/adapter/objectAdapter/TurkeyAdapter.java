package patterns.adapter.objectAdapter;

public class TurkeyAdapter implements Duck {
	Turkey turkey;
	
	public TurkeyAdapter(Turkey turkey) {
		this.turkey = turkey;
	}
	
	@Override
	public void fly() {
		System.out.println("I am a duck now, actually i am a turkey, i want to fly like duck.");
		turkey.fly();
	}

	@Override
	public void quack() {
		System.out.println("I am a duck now, actually i am a turkey, i want to quack like duck.");
		turkey.gobble();
	}
}
