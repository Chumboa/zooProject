#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Animal.h"

class Zoo {
public:
    Animal* add(Animal* a);
    Animal* remove(std::string name);
    void printSortedByName();
    void printSortedByAge();
private:
    std::map<std::string, Animal*> animals;
};

#endif // ZOO_H