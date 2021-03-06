package patterns.command.multipleControl;

public class StereoOnCommand implements Command {
	private Stereo stereo;
	
	StereoOnCommand(Stereo stereo) {
		this.stereo = stereo;
	}
	
	@Override
	public void execute() {
		stereo.on();
		stereo.setCD();
		stereo.setVolume(10);
		stereo.play();
	}
}
