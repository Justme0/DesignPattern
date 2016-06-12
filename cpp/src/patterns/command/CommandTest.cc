#include "Command.h"
#include "TV.h"
#include "Stereo.h"
#include "Light.h"
#include "RemoteControler.h"

int main () {
    Light *light1 = new Light("Living Room");
    Light *light2 = new Light("Bedroom");
    TV *tv = new TV("Living Room");
    Stereo *stereo = new Stereo("Living Room");

    RemoteControler *remote_controler = new RemoteControler(5);
    LightOnCommand *light1_on = new LightOnCommand(light1);
    LightOffCommand *light1_off = new LightOffCommand(light1);
    LightOnCommand *light2_on = new LightOnCommand(light2);
    LightOffCommand *light2_off = new LightOffCommand(light2);
    TVOnCommand *tv_on = new TVOnCommand(tv);
    TVOffCommand *tv_off = new TVOffCommand(tv);
    StereoOnCommand *stereo_on = new StereoOnCommand(stereo);
    StereoOffCommand *stereo_off = new StereoOffCommand(stereo);
    remote_controler->SetCommand(0, light1_on, light1_off);
    remote_controler->SetCommand(1, light2_on, light2_off);
    remote_controler->SetCommand(2, tv_on, tv_off);
    remote_controler->SetCommand(3, stereo_on, stereo_off);
    for(int i = 0 ; i < 5 ; i ++) {
        remote_controler->PressOn(i);
        remote_controler->PressOff(i);
    }
    while(remote_controler->PressUndo());
    return 0;
}
