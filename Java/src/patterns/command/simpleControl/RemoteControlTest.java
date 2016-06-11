package patterns.command.simpleControl;

public class RemoteControlTest {
	public static void main(String argv[]) {
		Light light = new Light("Living Room");
		TV tv = new TV("Living Room");
		Command lightOn = new LightOnCommand(light);
		Command lightOff = new LightOffCommand(light);
		Command tvOn = new TVOnCommand(tv);
		Command tvOff = new TVOffCommand(tv);
		SimpleRemoteControl remoteControl = new SimpleRemoteControl(lightOn);
		remoteControl.pressed();
		remoteControl.setCommand(lightOff);
		remoteControl.pressed();
		remoteControl.setCommand(tvOn);
		remoteControl.pressed();
		remoteControl.setCommand(tvOff);
		remoteControl.pressed();
	}
}
