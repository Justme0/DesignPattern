package patterns.strategy;

public class Quack implements SoundBehavior {
	public void sound() {
		System.out.println("quack, quack, quack.");
	}
}
