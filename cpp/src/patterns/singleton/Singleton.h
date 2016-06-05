#ifndef SIGLETON_H_
#define SIGLETON_H_

class Singleton {
private :
    Singleton();

public :
    static Singleton &GetInstance();

    Singleton(Singleton const&) = delete;
    Singleton &operator=(Singleton const&) = delete;
};
#endif /* SIGLETON_H_ */
