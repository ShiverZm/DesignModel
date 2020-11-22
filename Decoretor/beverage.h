#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>

using namespace std;

class Bervage{
public:
    virtual string getDescription(){
        return description;
    }
    virtual double cost()=0;
protected:
    string description;
};



#endif // BEVERAGE_H
