package patterns.observer;

public class CurrentConditionDisplay {
	private float temperature;
	private float humidity;
	private float pressure;
	
	public void update(float temperature, float humidity, float pressure) {
		this.temperature = temperature;
		this.humidity = humidity;
		this.pressure = pressure;
		
		display();
	}
	
	public void display() {
		System.out.println("CurrentConditionDisplay: " + temperature + " " + humidity + " " + pressure);
	}
}
