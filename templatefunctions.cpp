#include <iostream>
#include <string>
using namespace std;

/* 
    TEMPLATES: 
    - Generic data types, involves writing code in a way that is independent 
      of any particular type.
    - A template is a blueprint or formula for creating a generic class or a function. 
      The library containers like iterators and algorithms are examples of generic programming 
      and have been developed using template concept.
    - There is a single definition of each container, such as vector, but we can define many 
      different kinds of vectors for example, vector <int> or vector <string>.
    - You can use templates to define functions as well as classes
    - You can reuse the same functions for different types
 */

template <class T>
T multiply (T a, T b)
{
    return a*b;
}

int main()
{
    cout << multiply(5.5,4.5) << endl;
    cout << multiply(5,4) << endl;

    return 0;
}