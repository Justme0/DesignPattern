package patterns.command.undo;

public class RemoteControlTest {
	public static void main(String argv[]) {
		Light light1 = new Light("Living Room");
		Light light2 = new Light("Bedroom");
		TV tv = new TV("Living Room");
		Stereo stereo = new Stereo("Living Room");
		MultipleRemoteControl remoteControl = new MultipleRemoteControl(7);
		remoteControl.setCommand(0, new LightOnCommand(light1), new LightOffCommand(light1));
		remoteControl.setCommand(1, new LightOnCommand(light2), new LightOffCommand(light2));
		remoteControl.setCommand(2, new TVOnCommand(tv), new TVOffCommand(tv));
		remoteControl.setCommand(3, new StereoOnCommand(stereo), new StereoOffCommand(stereo));
		
		for(int i = 0 ; i < 7 ; i ++) {
			System.out.println("The " + i + "th of button.");
			remoteControl.pressOn(i);
			remoteControl.pressOff(i);
		}	
		
		while(remoteControl.pressUndo()) ;
	}
}
