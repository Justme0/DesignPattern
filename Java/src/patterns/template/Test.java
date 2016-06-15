package patterns.template;

public class Test {

	public static void main(String[] args) {
		Coffe coffe = new Coffe();
		Tea tea = new Tea();
		coffe.prepare();
		tea.prepare();
	}
}
