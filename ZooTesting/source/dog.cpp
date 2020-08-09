#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

// Base empty constructor
// Sets dog's name to "" and age to 0
// using the constructor defined in the Animal Base class
Dog::Dog() : Animal("", 0){}

// Named constructor
// Sets dog's name to n and age to 0
// using the constructor defined in the Animal Base class
Dog::Dog(string n) : Animal(n, 0){}

// Name and aged constructor
// Sets dog's name to n and age to a
// using the constructor defined in the Animal Base class
Dog::Dog(string n, int a) : Animal(n,a){}

// Specific noise defined for the dog
void Dog::makeNoise()
{
    cout << "<" << getName() << ">: "<< "Woof, woof!";
    cout << " | Age: " << getAge() << endl;
}