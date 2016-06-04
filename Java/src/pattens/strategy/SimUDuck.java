package pattens.strategy;

public class SimUDuck {
	public static void main(String argv[]) {
		MallardDuck mallard = new MallardDuck();
		mallard.display();
		mallard.quack();
		mallard.swim();
		mallard.fly();
		
		RedheadDuck redhead = new RedheadDuck();
		redhead.display();
		redhead.quack();
		redhead.swim();
		redhead.fly();
		
		RubberDuck rubber = new RubberDuck();
		rubber.display();
		rubber.quack();
		rubber.swim();
		rubber.fly();
		
		DecoyDuck decoy = new DecoyDuck();
		decoy.display();
		decoy.quack();
		decoy.swim();
		decoy.fly();
	}
}
