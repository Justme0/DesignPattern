#ifndef SOUNDBEHAVIOR_H_
#define SOUNDBEHAVIOR_H_

class SoundBehavior {
public:
    virtual void sound() = 0;
};

class Quack: public SoundBehavior {
public :
    void sound() final;
};

class Squeak: public SoundBehavior {
public :
    void sound() final;
};

class Silence: public SoundBehavior {
public :
    void sound() final;
};
#endif /* SOUNDBEHAVIOR_H_ */
