#include <iostream>
#include <string>

using namespace std;

int main () {

    int number = 0;


    cout << "Please input a number: " << endl;
    cin >> number;

    if (number < 10) {
        cout << "Your number is less than 10! " << endl;
    }
    else if (number >= 10 && number < 15) {
        cout << "The number is greater or equal to 10 and less than 15" << endl;
    }
    else {
        cout << "The number is greater than or equal to 15" << endl;
    }

    return 0;
}