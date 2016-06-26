package patterns.state.stateInterface;

public class SoldState implements State {
	private VendingMachine machine;
	
	public SoldState(VendingMachine machine) {
		this.machine = machine;
	}

	@Override
	public void insert() {
		System.out.println("Please wait, we're already giving you a goods.");
	}

	@Override
	public void eject() {
		System.out.println("Sorry, you already bought");
	}

	@Override
	public void bought() {
		System.out.println("You already bought one, don't do it twice");
	}

	@Override
	public void dispense() {
		System.out.println("Coming!!!");
		machine.release();
		if (machine.getCount() == 0) {
			System.out.println("Cong, you got the last one!");
			machine.setState(machine.getSoldOut());
		} else {
			machine.setState(machine.getNoMoney());
		}
	}

}
