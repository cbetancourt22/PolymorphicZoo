#include <iostream>
#include "animal.h"
#include "cat.h"
using namespace std;

// Base empty constructor
// Sets cat's name to "" and age to 0
// using the constructor defined in the Animal Base class
Cat::Cat() : Animal("", 0){}

// Named constructor
// Sets cat's name to n and age to 0
// using the constructor defined in the Animal Base class
Cat::Cat(string n) : Animal (n, 0){}

// Name and aged constructor
// Sets cat's name to n and age to a
// using the constructor defined in the Animal Base class
Cat::Cat(string n, int a) : Animal(n,a){}

// Specific noise defined for the cat
void Cat::makeNoise()
{
    cout << "<" << getName() << ">: "<< "Meow, meow!";
    cout << " | Age: " << getAge() << endl;

}