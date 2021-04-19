#include <iostream>
using namespace std;

/* 
    Value vs Reference:
    - Passing arguments to functions as values or as references
    - When we give a varibale to a function in C++ it makes a copy of that variable
    
 */

// & is a reference to the original variable vs a copy
// This function can now PERMANENTLY change the variable
void increase(int& a)
{
    a++;
    cout << "Test number after increment in function: " << a << endl;
}

int main()
{
    // when you pass arguments by value and change them in the function,
    // the original value DOESN'T change
    int testNumber = 5;
    increase(testNumber);

    cout << "Test number after the function: " << testNumber << endl;

    return 0;
}

/* 
    VALUE:
    Test number after increment in function: 6
    Test number after the function: 5

    REFERENCE:
    Test number after increment in function: 6
    Test number after the function: 6
 */