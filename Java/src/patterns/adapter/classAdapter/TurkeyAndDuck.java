package patterns.adapter.classAdapter;

public class TurkeyAndDuck {
	public static void main(String argv[]) {
		TurkeyAdapter adapter = new TurkeyAdapter();
		adapter.duckFly();
		adapter.quack();
	}
}
