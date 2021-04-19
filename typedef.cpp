#include <iostream>
#include <string>

using namespace std;

/* 
    Typedef: Brief intro
    - Creates an alias that can be used anywhere in place of a (possibly complex) type name.
    - Helps when using templates and to manage complex/massive data types.
    - The typedef specifier, when used in a declaration, specifies that the declaration is a typedef 
      declaration rather than a variable or function declaration.
    - We can assign a new name to any data type. We can also use typedef to assign a new name to a
      struct which is a user-defined datatype etc
 */

struct Homosapiens {
    string name;
};

typedef Homosapiens Person;

typedef double height;

int main() {

    height cianHeight = 191.5;
    Person person;
    person.name;

    cout << cianHeight << endl;
    return 0;
}