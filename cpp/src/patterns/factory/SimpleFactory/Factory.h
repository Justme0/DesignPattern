#ifndef FACTORY_H_
#define FACTORY_H_

class SimplePizzaFactory {
public :
    Pizza *CreatePizza(std::string type) {
        Pizza *pizza = NULL;
        if(type == "Cheess") {
            pizza = new CheessPizza();
        }
        else if (type == "Clam") {
            pizza = new ClamPizza();
        }
        else {
            std::cout << "What's this? >_<" << std::endl;
        }
        return pizza;
    }
};
#endif /* FACTORY_H_ */
