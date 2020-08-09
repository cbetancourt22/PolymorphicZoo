#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "animal.h"

class Cat: public Animal 
{
public:
    // Base empty constructor for Cat
    // Sets cat's name to "" and age to 0
    Cat();
    // Named constructor
    // Sets cat's name to n and age to 0
    Cat(string n);
    // Names and aged constructor
    // Set's cat's name to n and age to 0
    Cat(string n, int a);

    // Method from base class to print noise made by animal
    void makeNoise();
};

#endif