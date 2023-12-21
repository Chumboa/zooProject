#include "Tiger.h"
#include <iostream>
#include <string>
#include <sstream>


Tiger::Tiger(std::string name, Date birth, double weight, std::string species)
    : Animal(name, birth, weight), species(species) {}

std::string Tiger::getSpecies() const {
    return species;
}

void Tiger::setSpecies(const std::string& species) {
    this->species = species;
}

std::string Tiger::toString() const {
    std::stringstream ss;
    ss << "Tiger [name=" << getName() << ", birth=" << getBirth().toString() << ", weight=" << getWeight() << ", species=" << species << "]";
    return ss.str();
}

void Tiger::move() {
    std::cout << getName() << " the tiger is running." << std::endl;
}

void Tiger::utter() {
    std::cout << getName() << " the tiger is growling." << std::endl;
}