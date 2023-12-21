#include "Zoo.h"
#include <iostream>
#include <algorithm>

Animal* Zoo::add(Animal* a) {
    Animal* oldAnimal = animals[a->getName()];

    animals[a->getName()] = a;

    return oldAnimal;
}

Animal* Zoo::remove(std::string name) {
    Animal* removedAnimal = nullptr;

    auto it = animals.find(name);

    if (it != animals.end()) {
        removedAnimal = it->second;
        animals.erase(it);
    }

    return removedAnimal;
}

void Zoo::printSortedByName() {
    std::cout << "Animals sorted by name:" << std::endl;

    for (auto& animal : animals) {
        std::cout << animal.second->toString() << std::endl;
    }
}

void Zoo::printSortedByAge() {
    std::vector<Animal*> animalList;

    for (auto& animal : animals) {
        animalList.push_back(animal.second);
    }

    std::sort(animalList.begin(), animalList.end(), [](Animal* a, Animal* b) {
        const Date& dateA = a->getBirth();
        const Date& dateB = b->getBirth();
        if (dateA.getYear() < dateB.getYear()) {
            return true;
        }
        else if (dateA.getYear() > dateB.getYear()) {
            return false;
        }
        else if (dateA.getMonth() < dateB.getMonth()) {
            return true;
        }
        else if (dateA.getMonth() > dateB.getMonth()) {
            return false;
        }
        else if (dateA.getDay() < dateB.getDay()) {
            return true;
        }
        else {
            return false;
        }
        });

    std::cout << "Animals sorted by age:" << std::endl;

    for (auto& animal : animalList) {
        std::cout << animal->toString() << std::endl;
    }
}