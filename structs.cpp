#include <iostream>
#include <string>
using namespace std;


/* 
    Structs C++ : Object Oriented Programming
    - Structs are a simple way to define our own user-defined aggregate datatypes and there are many 
      instances where we need more than one variable in order to represent an object.
    - Structs allow us to group variables of mixed data types together into a single unit.
    - The variables that are part of the struct are called  members (or fields). 
      These variables are a part of the struct declaration, but no memory is allocated at this time.

    // Represent a person
    // 1) Name
    // 2) Age
    // 3) Gender
 */

struct Person {

    string name;
    int age;
    string gender;
};

void printPersonInfo(Person p){
    cout << "The name of the person is " << p.name << endl;
    cout << "The age of the person is " << p.age << endl;
    cout << "The gender of the person is " << p.gender << endl;
}

int main(){

    Person cian = { "Cian", 33, "Female" };
    Person kevin = { "Kevin", 29, "Male" };

    printPersonInfo(cian);
    printPersonInfo(kevin);
    
    return 0;
}
