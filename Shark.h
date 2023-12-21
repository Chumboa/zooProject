#ifndef SHARK_H
#define SHARK_H

#include "Animal.h"

class Shark : public Animal {
private:
    std::string species;
public:
    Shark(std::string name, Date birth, double weight, std::string species = "");
    std::string getSpecies() const;
    void setSpecies(const std::string& species);
    std::string toString() const override;
    void move() override;
    void utter() override;
};

#endif