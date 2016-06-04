package pattens.strategy;

public abstract class Duck {
	FlyBehavior flyBehavior;
	SoundBehavior soundBehavior;
	
	public Duck () {
		System.out.println("Create a new Duck().");
	}
	
	public void swim() {
		System.out.println("swim, swim, swim.");
	}
	
	public void sound() {
		soundBehavior.sound();
	}
	
	public void fly() {
		flyBehavior.fly();
	}
	
	abstract void display();
}
