package patterns.state.stateInterface;

public class HasMoneyState implements State {
	private VendingMachine machine;
	
	public HasMoneyState(VendingMachine machine) {
		this.machine = machine;
	}
	
	@Override
	public void insert() {
		System.out.println("Already have money.");
	}

	@Override
	public void eject() {
		System.out.println("Money returned");
		machine.setState(machine.getNoMoney());
	}

	@Override
	public void bought() {
		System.out.println("You got the goods...");
		machine.setState(machine.getSold());
	}

	@Override
	public void dispense() {
		System.out.println("No dispensed");
	}

}
