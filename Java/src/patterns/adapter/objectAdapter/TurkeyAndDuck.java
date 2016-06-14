package patterns.adapter.objectAdapter;

public class TurkeyAndDuck {
	public static void main(String argv[]) {
		WildTurkey turkey = new WildTurkey();
		TurkeyAdapter adapter = new TurkeyAdapter(turkey);
		adapter.fly();
		adapter.quack();
	}
}
