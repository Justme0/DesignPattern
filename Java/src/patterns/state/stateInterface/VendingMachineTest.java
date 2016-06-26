package patterns.state.stateInterface;

import patterns.state.naive.VendingMachine;

public class VendingMachineTest {

	public static void main(String[] args) {
		VendingMachine machine = new VendingMachine(5);
		machine.insert();
		machine.bought();


		machine.insert();
		machine.eject();
		machine.bought();

		machine.insert();
		machine.bought();
		machine.insert();
		machine.bought();
		machine.eject();

		machine.insert();
		machine.insert();
		machine.bought();
		machine.insert();
		machine.bought();
		machine.insert();
		machine.bought();
	}
}
