package pattens.strategy;

public class SimUDuck {
	public static void main(String argv[]) {
		MallardDuck mallard = new MallardDuck();
		mallard.display();
		mallard.sound();
		mallard.swim();
		mallard.fly();
		
		RedheadDuck redhead = new RedheadDuck();
		redhead.display();
		redhead.sound();
		redhead.swim();
		redhead.fly();
		
		RubberDuck rubber = new RubberDuck();
		rubber.display();
		rubber.sound();
		rubber.swim();
		rubber.fly();
		
		DecoyDuck decoy = new DecoyDuck();
		decoy.display();
		decoy.sound();
		decoy.swim();
		decoy.fly();
	}
}
