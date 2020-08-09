#ifndef PIG_H
#define PIG_H

#include <string>
#include <iostream>

class Pig: public Animal 
{
public:
    // Base empty constructor for Pig
    // Sets pig's name to "" and age to 0
    Pig();
    // Named constructor
    // Sets pig's name to n and age to 0
    Pig(string n);
    // Names and aged constructor
    // Sets pig's name to n and age to 0
    Pig(string n, int a);

    // Method from base class to print noise made by animal
    void makeNoise();
};

#endif