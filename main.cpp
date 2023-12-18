#include <iostream>
#include <vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
    std::vector<Pet*> pvec; //creating a vector to store pointers of different pet objects

    //creating pets
    pvec.push_back(new Dog("Bob", 65));  //dog with name Bob and weight 65 lbs
    pvec.push_back(new Dog("Stan", 37)); //dog with name Stan and weight 37 lbs
    pvec.push_back(new Cat("Tom", 12));  //cat with name Tom and weight 12 lbs

    float total_fee = 0.0;

    //calculating and displaying the licensing fee
    for (int i = 0; i < pvec.size(); i++) {
        std::cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << std::endl;
        total_fee += pvec[i]->CalculateFee();
    }
    std::cout << "total licensing fee = " << total_fee << std::endl;

    //cleaning up to avoid any memory leak
    for (int i = 0; i < pvec.size(); i++) {
        delete pvec[i];
    }
    return 0;
}