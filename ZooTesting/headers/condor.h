#ifndef CONDOR_H
#define CONDOR_H

#include <iostream>
#include "animal.h"

class Condor: public Animal 
{
public:
    // Base empty constructor for Condor
    // Sets condor's name to "" and age to 0
    Condor();
    // Named constructor
    // Sets condor's name to n and age to 0
    Condor(string n);
    // Names and aged constructor
    // Sets condor's name to n and age to 0
    Condor(string n, int a);

    // Method from base class to print noise made by animal
    void makeNoise();
};

#endif