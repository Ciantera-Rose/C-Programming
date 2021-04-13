#include <iostream>
#include <string>
using namespace std;

// include string library to store text

int main () {

    /* 
        1) Get the name of the user
        2) Print "Good Morning " + User Name
     */

    string name = "";
    cout << "What is your name?" << endl;

    getline(cin, name);
    // cin >> name;
    cout << "Good Morning " << name + "!" << endl;

    int age = 0;
    cout << "How old are you? ";
    cin >> age;
    cout << "Oh so you are " << age << " years old!";

    return 0;
}
// Good Morning Cian!
// Good Morning Satoshi Nakomoto!
// Oh so you are 33 years old!