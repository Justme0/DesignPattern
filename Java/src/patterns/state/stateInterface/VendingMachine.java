package patterns.state.stateInterface;

public class VendingMachine {
	private int count;
	private State noMoney;
	private State hasMoney;
	private State sold;
	private State soldOut;
	private State state;
	private State winner;
	
	public VendingMachine(int count) {
		this.count = count;
		
		noMoney = new NoMoneyState(this);
		hasMoney = new HasMoneyState(this);
		sold = new SoldState(this);
		soldOut = new SoldOutState(this);
		winner = new WinnerState(this);
		
		if(this.count > 0) {
			state = noMoney;
		}
		else {
			state = soldOut;
		}
	}
	
	public void insert() {
		state.insert();
	}
	
	public void eject() {
		state.eject();
	}
	
	public void bought() {
		state.bought();
		state.dispense();
	}
	
	public void dispense() {
		state.dispense();
	}
	
	public void release() {
		System.out.println("A goods is coming out");
		count -= 1;
	}
	
	public void setState(State state) {
		this.state = state;
	}
	
	public State getNoMoney() {
		return noMoney;
	}

	public State getHasMoeny() {
		return hasMoney;
	}
	
	public State getSold() {
		return sold;
	}
	
	public State getSoldOut() {
		return soldOut;
	}
	
	public State getWinner() {
		return winner;
	}
	
	public int getCount() {
		return count;
	}
}
