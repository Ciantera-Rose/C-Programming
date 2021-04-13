#include <iostream>
#include <string>
using namespace std;

/* 
    - Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

    - The array data type lets us access many variables of the same type through a single identifier.

    - A fixed array is an array where the length is known at compile time. Fixed arrays cannot have a length based 
      on either user input or some other value calculated at runtime. Fixed arrays have a fixed length that can not be changed.

    - The length of a dynamic array can be set at runtime, and their length can be changed.

    - To avoid buggy undefined behavior be sure to stay within the bounds of the array.
 */


int main () {
    int arr[5] = {4, 1, 8, 2, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "The length of the array is: " << len << endl;

    return 0;
    // The length of the array is: 5
}
