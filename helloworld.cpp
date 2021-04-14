
#include <iostream>
using namespace std;

/*
    What is a variable in C++?
    - A variable is a named region of memory. A named object is called a variable, 
      and the name of the object is called an identifier. 
      In our programs, most of the objects we create will be variables.
    
    What is the Definition of a variable?
    - In order to create a variable, we use a special kind of declaration statement called a definition.
  
    What is Instantiation of a variable?
    - When the program is run (called runtime), the variable will be **instantiated
    - Instantiation is a fancy word that means the object will be created and assigned a memory address.
    - Variables must be **instantiated** before they can be used to store values.
    - An instantiated object is sometimes also called an instance
*/

// Define a variable named x of type int:
// A type tells the program how to interpret a value in memory.
// Whenever the compiler sees the identifier x, it will know that we’re referencing this variable.


// type int holds whole numbers
int a = 5;
int b = 3;
int c = a*b;

//type bool (true = 1 or false = 0)
bool d = true;
bool e = false;

bool k = d&&e;
// Hello Everyone! 0
bool l = d||e;
// Hello Everyone! 1

// type double and float (stores decimal numbers)
double h = 0.5;
// Hello Everyone! 0.5
double j = 0.7;

double result = h+j;
// Hello Everyone! 1.2

float i = 0.9;
// Hello Everyone! 0.9


int main (){

    cout << "Hello Everyone! " << result;

    return 0;
}











