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

    return 0;
}
// Good Morning Cian!
