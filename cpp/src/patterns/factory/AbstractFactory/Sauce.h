#ifndef SAUCE_H_
#define SAUCE_H_

#include <string>

class Sauce{
public :
    virtual ~Sauce() {}
    virtual std::string ToString() = 0;
};

class NewYorkSauce: public Sauce{
public :
    std::string ToString() {
        return "NewYorkSauce";
    }
};

class ChicagoSauce: public Sauce {
public:
    std::string ToString() {
        return "ChicagoSauce";
    }
};
#endif /* SAUCE_H_ */
