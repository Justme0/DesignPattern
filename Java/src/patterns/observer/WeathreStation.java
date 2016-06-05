package patterns.observer;

public class WeathreStation {
	public static void main(String argv[]) {
		WeatherData weather = new WeatherData();
		weather.setChange(0,0,0);
		weather.setChange(3,2,1);
		weather.setChange(1,2,3);
	}
}
