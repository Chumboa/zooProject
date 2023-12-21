#include "Animal.h"
#include <iostream>
#include <sstream>


Animal::Animal(std::string name, Date birth, double weight)
    : name(name), birth(birth), weight(weight) {}

std::string Animal::getName() const {
    return name;
}

void Animal::setName(std::string name) {
    this->name = name;
}

Date Animal::getBirth() const {
    return birth;
}

void Animal::setBirth(Date birth) {
    this->birth = birth;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double weight) {
    this->weight = weight;
}

bool Animal::operator<(const Animal& other) const {
    if (name < other.name) {
        return true;
    }
    else if (name > other.name) {
        return false;
    }
    else {
        if (birth.getYear() < other.birth.getYear()) {
            return true;
        }
        else if (birth.getYear() > other.birth.getYear()) {
            return false;
        }
        else {
            if (birth.getMonth() < other.birth.getMonth()) {
                return true;
            }
            else if (birth.getMonth() > other.birth.getMonth()) {
                return false;
            }
            else {
                return birth.getDay() < other.birth.getDay();
            }
        }
    }
}

std::string Animal::toString() const {
    std::ostringstream output;
    output << "Name: " << name << ", Birth: " << birth.toString()
           << ", Weight: " << weight;
    return output.str();
}