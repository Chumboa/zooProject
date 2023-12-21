#ifndef ANIMAL_H
#define ANIMAL_H

#include "Date.h"
#include <string>

class Animal {
private:
    std::string name;
    Date birth;
    double weight;

public:
    Animal(std::string name = "", Date birth = Date(), double weight = 0.0);
    virtual ~Animal() = default;

    std::string getName() const;
    void setName(std::string name);
    Date getBirth() const;
    void setBirth(Date birth);
    double getWeight() const;
    void setWeight(double weight);

    virtual void move() = 0;
    virtual void utter() = 0;
    virtual std::string toString() const;

    bool operator<(const Animal& other) const;
};

#endif