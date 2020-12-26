#ifndef PRODUCT_H
#define PRODUCT_H
#include <map>
#include <string>
class Product{

public:
    std::map<std::string,std::string> itemList;

    void Add(std::string itemIndex,std::string itemContent){
        itemList[itemIndex] = itemContent;
    }


};

#endif // PRODUCT_H
