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


// int main () {
//     int arr[5] = {4, 1, 8, 2, 9};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     cout << "The length of the array is: " << len << endl;

//     return 0;
//     // The length of the array is: 5
// }


int main() {

    int numberOfCars = 10;
    int carMiles[] = { 15, 13, 17, 30, 5, 2, 18, 9, 43, 22 };

    string carManufacturers[] = { "Sabb", "Volvo", "BMW" };

    cout << carMiles[0] << endl;
    cout << carMiles[1] << endl;
    cout << carMiles[2] << endl;
    cout << carMiles[3] << endl;
    // 15
    // 13
    // 17
    // 30

    cout << carManufacturers[1] << endl;
    // Volvo

    cout << "Number of cars: " << numberOfCars << endl;
    // 10

    return 0;
}
