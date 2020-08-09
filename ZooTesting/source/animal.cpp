/*  LEARNING MODULE 5, PART 1
    Whitworth University - Computer Science 172
    
    Polymorphic Zoo - Polymorphism

    Xavier Betancourt
*/

#include "animal.h"
#include "condor.h"
//Base empty constructor
//Sets name to "" and age to 0
Animal::Animal() : Animal("",0){}

//Named constructor
//Sets animal's name to n and age to 0
Animal::Animal(string n) : Animal(n,0){}

//Names and aged constructor
//Sets animal's name to n and age to a
Animal::Animal(string n, int a): name(n), age(a){}

//Adds one year to the age of the animal
//Post condition: age increments by one
void Animal::growUp(){
    age++;
    return;
}

//Interface method to get name of animal as a string
string Animal::getName() const{
    return name;
}
//Interface method to get age of animal as int
int Animal::getAge() const{
    return age;
}

ostream& operator<<(ostream& out, const Animal & anml){
    out << anml.getName() << " (" << anml.getAge() << " yrs)";
    return out;
}