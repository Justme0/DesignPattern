package patterns.command.undo;

public class Stereo {
	private String location;
	
	public Stereo(String location) {
		this.location = location;
	}

	public void on() {
		System.out.println("The Stereo in " + location + " is on.");
	}
	
	public void off() {
		System.out.println("The Stereo in " + location + " is off.");
	}
	
	public void setCD() {
		System.out.println("The Stereo in " + location + " is set for CD.");
	}
	
	public void setVolume(int volume) {
		System.out.println("The volume of Stereo in " + location + " is set for " + volume + ".");
	}
	
	public void play() {
		System.out.println("The Stereo in " + location + " is played.");
	}
}
