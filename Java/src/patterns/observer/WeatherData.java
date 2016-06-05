package patterns.observer;

import java.util.ArrayList;

public class WeatherData implements Subject {
	private float temperature;
	private float humidity;
	private float pressure;
	private ArrayList<Observer> observers;
	
	
	public WeatherData() {
		observers = new ArrayList<Observer>();
	}
	
	public void measurementsChanged() {
		notifyObservers();
	}
	
	public void setChange(float temperature, float humidity, float pressure) {
		this.temperature = temperature;
		this.humidity = humidity;
		this.pressure = pressure;
		System.out.println("##### Some changes happend! #####");
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

	@Override
	public void registerObserver(Observer observer) {
		observers.add(observer);
	}

	@Override
	public void removeObserver(Observer observer) {
		int idx = observers.indexOf(observer);
		if(idx >= 0) {
			observers.remove(idx);
		}
	}

	@Override
	public void notifyObservers() {
		for(Observer observer: observers) {
			observer.update(temperature, humidity, pressure);
		}
	}
}
