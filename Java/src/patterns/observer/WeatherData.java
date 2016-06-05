package patterns.observer;

public class WeatherData {
	private float temperature;
	private float humidity;
	private float pressure;
	
	CurrentConditionDisplay curcondition;
	HeatIndexDisplay heatindex;
	
	public WeatherData() {
		curcondition = new CurrentConditionDisplay();
		heatindex = new HeatIndexDisplay();
	}
	
	public void measurementsChanged() {
		float tem = getTemperature();
		float hum = getHumidity();
		float pre = getPressure();
		
		
		curcondition.update(tem, hum, pre);
		heatindex.update(tem, hum, pre);
	}
	
	public void setChange(float temperature, float humidity, float pressure) {
		this.temperature = temperature;
		this.humidity = humidity;
		this.pressure = pressure;
		measurementsChanged();
	}
	
	public float getTemperature() {
		return temperature;
	}
	
	public float getHumidity() {
		return humidity;
	}
	
	public float getPressure() {
		return pressure;
	}
}
