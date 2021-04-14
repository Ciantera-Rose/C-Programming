#include <iostream>
#include <string>
using namespace std;


/* 
    Structs C++ : Object Oriented Programming
    - A simple way to define our own datatypes
    - Define outside int main()

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

    Person cian;
    cian.name = "Cian";
    cian.gender = "female";
    cian.age = 33;

    Person kevin;
    kevin.name = "Kevin";
    kevin.gender = "Male";
    kevin.age = 29;

    Person people[] = {cian, kevin};

    // printPersonInfo(cian);
    // printPersonInfo(kevin);
    printPersonInfo(people[0]);
    

    return 0;
}
/* 
    The name of the person is Cian
    The age of the person is 33
    The gender of the person is female
    etc ...
 */