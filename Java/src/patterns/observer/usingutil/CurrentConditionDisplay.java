package patterns.observer.usingutil;

import java.util.Observable;
import java.util.Observer;

public class CurrentConditionDisplay implements DisplayElement, Observer {
	private float temperature;
	private float humidity;
	private float pressure;
	
	public CurrentConditionDisplay(Observable observable) {
		observable.addObserver(this);
	}
	
	@Override
	public void display() {
		System.out.println("CurrentConditionDisplay: " + temperature + " " + humidity + " " + pressure);
	}

	@Override
	public void update(Observable o, Object arg) {
		if (o instanceof WeatherData) {
			WeatherData weather = (WeatherData) o;
			this.temperature = weather.getTemperature();
			this.humidity = weather.getHumidity();
			this.pressure = weather.getPressure();
			display();
		}
	}
}
