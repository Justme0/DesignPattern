package patterns.state.naive;

public class VendingMachine {
	private final static int SOLD_OUT = 0;
	private final static int NO_MONEY = 1;
	private final static int HAS_MONEY = 2;
	private final static int SOLD = 3;
	
	private int count;
	private int state = SOLD_OUT;
	
	public VendingMachine(int count) {
		this.count = count;
		if(this.count > 0) {
			state = NO_MONEY;
		}
	}
	
	public void insert() {
		if (state == HAS_MONEY) {
			System.out.println("Already have money.");
		} else if (state == NO_MONEY) {
			state = HAS_MONEY;
			System.out.println("You inserted the money");
		} else if (state == SOLD_OUT) {
			System.out.println("The machine is sold out");
		} else if (state == SOLD) {
			System.out.println("Please wait, we're already giving you a goods.");
		}
	}

	public void eject() {
		if (state == HAS_MONEY) {
			System.out.println("Money returned");
			state = NO_MONEY;
		} else if (state == NO_MONEY) {
			System.out.println("You haven't inserted money");
		} else if (state == SOLD) {
			System.out.println("Sorry, you already bought");
		} else if (state == SOLD_OUT) {
			System.out.println("You haven't inserted money");
		}
	}

	public void bought() {
		if (state == SOLD) {
			System.out.println("You already bought one, don't do it twice");
		} else if (state == NO_MONEY) {
			System.out.println("You turned but there's no money");
		} else if (state == SOLD_OUT) {
			System.out.println("You turned, but there are no goods");
		} else if (state == HAS_MONEY) {
			System.out.println("You got the goods...");
			state = SOLD;
			dispense();
		}
	}

	public void dispense() {
		if (state == SOLD) {
			System.out.println("Coming!!!");
			count = count - 1;
			if (count == 0) {
				System.out.println("Cong, you got the last one!");
				state = SOLD_OUT;
			} else {
				state = NO_MONEY;
			}
		} else if (state == NO_MONEY) {
			System.out.println("You need to pay first");
		} else if (state == SOLD_OUT) {
			System.out.println("No dispensed");
		} else if (state == HAS_MONEY) {
			System.out.println("No dispensed");
		}
	}
}
