#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

class Dog: public Animal 
{
public:
    // Base empty constructor for Dog
    // Sets dog's name to "" and age to 0
    Dog();
    // Named constructor
    // Sets dogs's name to n and age to 0
    Dog(string n);
    // Names and aged constructor
    // Set's dog's name to n and age to 0
    Dog(string n, int a);

    // Method from base class to print noise made by animal
    void makeNoise();
    
};

#endif