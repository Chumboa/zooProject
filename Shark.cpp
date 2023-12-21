#include "Shark.h"
#include <iostream>
#include <string>
#include <sstream>


Shark::Shark(std::string name, Date birth, double weight, std::string species)
    : Animal(name, birth, weight), species(species) {}

std::string Shark::getSpecies() const {
    return species;
}

void Shark::setSpecies(const std::string& species) {
    this->species = species;
}

std::string Shark::toString() const {
    std::stringstream ss;
    ss << "Shark [name=" << getName() << ", birth=" << getBirth().toString() << ", weight=" << getWeight() << ", species=" << species << "]";
    return ss.str();
}

void Shark::move() {
    std::cout << getName() << " the shark is swimming." << std::endl;
}

void Shark::utter() {
    std::cout << getName() << " the shark is making no sound." << std::endl;
}