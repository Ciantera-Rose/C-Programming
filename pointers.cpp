#include <iostream>

using namespace std;

/* 
    POINTERS: 
    - A variable that stores the memory address as its value.
    - A pointer variable points to a data type (like int or string)
      of the same type, and is created with the * operator.
 */

void increment(int* pointer)
{
    (*pointer)++;
}

int main()
{
    int myAge = 33;
    cout << "My age: " << myAge << endl; 
    cout << "The address of myAge: " << &myAge << endl; 

    int* pointer = &myAge;
    cout << "Pointer points to: " << pointer << endl;
    cout << "Pointer points to: " << (*pointer) << endl;

    increment (pointer);
    increment (pointer);

    (*pointer)++;
    cout << "My age: " << myAge << endl;

   

    return 0;
}
/* 
    My age: 33
    The address of myAge: 0x7ffee75e0708
    Address: Pointer points to: 0x7ffee208d708
    Value: Pointer points to: 33
    Change value: My age: 34
 */