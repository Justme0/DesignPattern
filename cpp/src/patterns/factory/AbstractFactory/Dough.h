#ifndef DOUGH_H_
#define DOUGH_H_

#include <string>

class Dough {
public :
    virtual ~Dough() {}
    virtual std::string ToString() = 0;
};

class NewYorkDough: public Dough {
public :
    std::string ToString() {
        return "NewYorkDough";
    }
};

class ChicagoDough: public Dough {
public:
    std::string ToString() {
        return "ChicagoDough";
    }
};
#endif /* DOUGH_H_ */
