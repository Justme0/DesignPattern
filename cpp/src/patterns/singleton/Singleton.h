#ifndef SIGLETON_H_
#define SIGLETON_H_

class Singleton {
private :
    Singleton();
    Singleton(Singleton const&);
    void operator=(Singleton const&);
public :
    static Singleton &GetInstance();
};
#endif /* SIGLETON_H_ */
