#pragma once
#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"

class Tiger : public Animal {
private:
    std::string species;
public:
    Tiger(std::string name, Date birth, double weight, std::string species = "");
    std::string getSpecies() const;
    void setSpecies(const std::string& species);
    std::string toString() const override;
    void move() override;
    void utter() override;
};

#endif