package patterns.state.stateInterface;

public class WinnerState implements State {
	private VendingMachine machine;
	
	public WinnerState(VendingMachine machine) {
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
		System.out.println("You are the winner, you will get two goods");
		machine.release();
		if(machine.getCount() > 0) {
			machine.release();
			if(machine.getCount() == 0) {
				System.out.println("Cong, you got the last one.");
				machine.setState(machine.getSoldOut());
			}
			else {
				machine.setState(machine.getNoMoney());
			}
		}
		else {
			System.out.println("I'm soory, there is no goods, the award will send to you next time.");
			machine.setState(machine.getSoldOut());
		}
	}

}
