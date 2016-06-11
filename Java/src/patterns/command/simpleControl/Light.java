package patterns.command.simpleControl;

public class Light {
	private String location = "unknown";
	public Light(String location) {
		this.location = location;
	}
	
	public void on() {
		System.out.println("The light in " + location + " is on.");
	}
	
	public void off() {
		System.out.println("The light in " + location + " is off.");
	}
}
