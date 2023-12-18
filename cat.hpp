#ifndef CAT_H
#define CAT_H

#include "pet.hpp" //the base class header file

class Cat : public Pet {
public:
    Cat(const std::string& name, float weight) : Pet(name, weight) {} //constructor for the dog class
    float CalculateFee() const override {
        static float licensingRate = 1.5; //$1.5 per lb for dogs
        return weight * licensingRate; //calculating and returning the licensing rate
    }
};

#endif