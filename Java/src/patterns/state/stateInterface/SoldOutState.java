package patterns.state.stateInterface;

public class SoldOutState implements State {
	private VendingMachine machine;
	
	public SoldOutState(VendingMachine machine) {
		this.machine = machine;
	}
	
	@Override
	public void insert() {
		System.out.println("The machine is sold out");
	}

	@Override
	public void eject() {
		System.out.println("You haven't inserted money");
	}

	@Override
	public void bought() {
		System.out.println("You turned, but there are no goods");
	}

	@Override
	public void dispense() {
		System.out.println("No dispensed");
	}
}
