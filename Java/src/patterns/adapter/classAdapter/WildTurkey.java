package patterns.adapter.classAdapter;

public class WildTurkey implements Turkey {

	@Override
	public void turkeyFly() {
		System.out.println("I am a WildTurkey, I can fly.");
	}

	@Override
	public void gobble() {
		System.out.println("I am a WildTurkey, I can gobble.");
	}
	
}
