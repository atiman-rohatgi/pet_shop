# Pet Shop

A small C++ program that calculates the monthly licensing fee for the pets in a hypothetical pet shop. It is meant as a simple demonstration of inheritance, polymorphism and pointers.

## How it works

The fee is charged per pound of body weight:

- Dogs: $2.00 per lb
- Cats: $1.50 per lb

The program creates three pets, prints each pet's fee, then prints the total:

- Bob, a 65 lb dog: $130
- Stan, a 37 lb dog: $74
- Tom, a 12 lb cat: $18
- Total: $222

## Files

- `pet.hpp`: abstract base class `Pet`. It stores a name and weight and declares a virtual `CalculateFee()`.
- `dog.hpp`: `Dog` class. Overrides `CalculateFee()` with the $2/lb rate.
- `cat.hpp`: `Cat` class. Overrides `CalculateFee()` with the $1.50/lb rate.
- `main.cpp`: stores the pets as `Pet*` pointers in a vector (`pvec`), prints the fees and total, then deletes the pets.

## Build and run

    g++ main.cpp -o pet_shop
    ./pet_shop

Language: C++
