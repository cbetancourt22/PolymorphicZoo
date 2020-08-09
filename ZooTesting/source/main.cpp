/*  LEARNING MODULE 10
    Whitworth University - Computer Science 172
    
    Polymorphic Zoo - Polymorphism C++

    Xavier Betancourt
*/
#include <iostream> // I/O
#include <vector>   // Hold different instances of animals
#include <string>   // names of animals
#include "animal.h"
#include "condor.h"
#include "dog.h"
#include "pig.h"
#include "cat.h"
using namespace std;

int main()
{

    // Generate different instances of animals
    // and assigns them a name and age. If information
    // is not specified, the program will call the correct
    // constructor to fill out the information
    Condor condor1("Pepe", 5);
    Condor condor2("Lucho", 6);
    Condor condor3("Manu", 4);
    Cat cat1("Gigabyte", 3);
    Cat cat2("Whiskers", 4);
    Cat cat3("Garfield", 9);
    Dog dog1("Pancho", 4);
    Dog dog2("Santa Paws", 11);
    Dog dog3("Mutilda");
    Pig pig1("Beacon", 2);
    Pig pig2("Ham Hammy Hamon", 1);
    Pig pig3("Chubby P", 9);

    // Store all the instances of animals into a vector
    // of animals
    vector<Animal *> animals;
    animals.push_back(&condor1);
    animals.push_back(&condor2);
    animals.push_back(&condor3);
    animals.push_back(&cat1);
    animals.push_back(&cat2);
    animals.push_back(&cat3);
    animals.push_back(&dog1);
    animals.push_back(&dog2);
    animals.push_back(&dog3);
    animals.push_back(&pig1);
    animals.push_back(&pig2);
    animals.push_back(&pig3);

    // Access all the instances of animals in the vector through the index
    // and make the animals reproduce their characteristic sound
    cout << "\t !! POLYMORPHIC ZOO !!" << endl;
    cout << "Current number of animals in the zoo: " << animals.size() << endl;
    cout << "Initial state of the animals -> " << endl
         << endl;
    for (int index = 0; index < animals.size(); index++)
    {
        animals.at(index)->makeNoise();
    }
    cout << endl;

    // Increment the age of the animals by one year
    cout << "One year after in the zoo.." << endl
         << endl;
    for (int index = 0; index < animals.size(); index++)
    {
        animals.at(index)->growUp();
        animals.at(index)->makeNoise();
    }

    return 0;
}