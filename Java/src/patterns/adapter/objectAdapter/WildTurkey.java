package patterns.adapter.objectAdapter;

public class WildTurkey implements Turkey {

	@Override
	public void fly() {
		System.out.println("I am a WildTurkey, I can fly.");
	}

	@Override
	public void gobble() {
		System.out.println("I am a WildTurkey, I can gobble.");
	}
	
}
