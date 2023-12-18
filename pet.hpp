#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(const std::string& name, float weight) : name(name), weight(weight) {} //constructor for the Pet class
    virtual float CalculateFee() const = 0; //calculating the licensing fee
    virtual std::string GetName() const { return name; } //getting the name

protected:
    std::string name; //name of the pet
    float weight; //weight of the pet
};

#endif
