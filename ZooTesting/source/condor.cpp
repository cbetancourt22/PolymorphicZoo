
#include "animal.h"
#include "condor.h"
using namespace std;

// Base empty constructor
// Sets condor's name to "" and age to 0
// using the constructor defined in the Animal Base class
Condor::Condor() : Animal("", 0){}

// Named constructor
// Sets name of condor to n and age to 0
// using the constructor defined in the Animal Base class
Condor::Condor(string n) : Animal (n, 0){}

// Name and aged constructor
// Sets condor's name to n and age to a
// using the constructor defined in the Animal Base class
Condor::Condor(string n, int a) : Animal(n,a){}

// Specific noise defined for the condor
void Condor::makeNoise()
{
    cout << "<" << getName() << ">: "<< "Caw, caw!";
    cout << " | Age: " << getAge() << endl;
}




