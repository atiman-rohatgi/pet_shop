#ifndef DOG_H
#define DOG_H

#include "pet.hpp" //the base class header file

class Dog : public Pet {
public:
    Dog(const std::string& name, float weight) : Pet(name, weight) {} //constructor for the dog class
    float CalculateFee() const override {
        static float licensingRate = 2.0; //$2 per lb for dogs
        return weight * licensingRate; //calculating and returning the licensing rate
    }
};

#endif