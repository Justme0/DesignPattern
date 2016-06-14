package patterns.adapter.classAdapter;

public class TurkeyAdapter extends WildTurkey implements Duck {
	@Override
	public void duckFly() {
		System.out.println("I am a duck now, actually i am a turkey, i want to fly like duck.");
		turkeyFly();
	}

	@Override
	public void quack() {
		System.out.println("I am a duck now, actually i am a turkey, i want to quack like duck.");
		gobble();
	}
}
