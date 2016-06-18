/*************************************************************************
	> File Name: Tea.h
	> Author: cxlove
	> Mail: cxlove321@gmail.com
	> Created Time: 六  6/18 21:51:39 2016
 ************************************************************************/

#ifndef TEA_H_
#define TEA_H_

#include "CaffeineBeverage.h"

class Tea: public CaffeineBeverage {
public:
    void SteepTeaBag() {
        cout << "Steep Tea Bag." << endl;
    }
    
    void AddLemon() {
        cout << "Add Lemon in Tea." << endl;
    }

    void Brew() {
        SteepTeaBag();
    }

    void AddCondiments() {
        AddLemon();
    }
};
#endif /* TEA_H_ */
