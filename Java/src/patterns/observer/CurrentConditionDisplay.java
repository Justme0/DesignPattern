package patterns.observer;

public class CurrentConditionDisplay implements DisplayElement, Observer {
	private float temperature;
	private float humidity;
	private float pressure;
	
	public CurrentConditionDisplay(Subject subject) {
		subject.registerObserver(this);
	}
	
	@Override
	public void update(float temperature, float humidity, float pressure) {
		this.temperature = temperature;
		this.humidity = humidity;
		this.pressure = pressure;
		
		display();
	}
	
	@Override
	public void display() {
		System.out.println("CurrentConditionDisplay: " + temperature + " " + humidity + " " + pressure);
	}
}
