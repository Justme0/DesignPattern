package patterns.state.stateInterface;

import java.util.Random;

public class HasMoneyState implements State {
	private VendingMachine machine;
	Random random = new Random(System.currentTimeMillis());

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
		int winner = random.nextInt(5);
		if(winner == 0) {
			machine.setState(machine.getWinner());
		}
		else {
			machine.setState(machine.getSold());
		}
	}

	@Override
	public void dispense() {
		System.out.println("No dispensed");
	}

}
