/*************************************************************************
	> File Name: Sigleton.h
	> Author: cxlove
	> Mail: cxlove321@gmail.com
	> Created Time: 六  6/ 4 14:46:05 2016
 ************************************************************************/

#ifndef SIGLETON_H_
#define SIGLETON_H_

class Singleton {
    public :
    static Singleton* GetInstance();
    private :
    Singleton();
    static Singleton *unique_instance_;
};
#endif /* SIGLETON_H_ */
