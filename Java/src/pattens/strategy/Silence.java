package pattens.strategy;

public class Silence implements SoundBehavior {
	public void sound() {
		System.out.println("Can't sound, be silence.");
	}
}
