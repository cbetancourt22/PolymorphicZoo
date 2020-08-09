#include <iostream>
#include "animal.h"
#include "pig.h"
using namespace std;

// Base empty constructor
// Sets pig's name to "" and age to 0
// using the constructor defined in the Animal Base class
Pig::Pig() : Animal("", 0){}

// Named constructor
// Sets pig's name to n and age to 0
// using the constructor defined in the Animal Base class
Pig::Pig(string n) : Animal(n,0){}

// Name and aged constructor
// Sets pig's name to n and age to a
// using the constructor defined in the Animal Base class
Pig::Pig(string n, int a) : Animal(n,a){}

// Specific noise defined for the pig
void Pig::makeNoise()
{
    cout << "<" << getName() << ">: "<< "Oink, Oink!";
    cout << " | Age: " << getAge() << endl;
}