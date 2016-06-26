package patterns.state.stateInterface;

public class NoMoneyState implements State {
	private VendingMachine machine;
	
	public NoMoneyState(VendingMachine machine) {
		this.machine = machine;
	}
	
	@Override
	public void insert() {
		System.out.println("You inserted the money");
		machine.setState(machine.getHasMoeny());
	}

	@Override
	public void eject() {
		System.out.println("You haven't inserted money");
	}

	@Override
	public void bought() {
		System.out.println("You turned but there's no money");
	}

	@Override
	public void dispense() {
		System.out.println("You need to pay first");
	}
}
