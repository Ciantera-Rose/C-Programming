#include <iostream>
#include <string>
using namespace std;


/* 
    Functions C++
    - A function is a reusable sequence of statements designed to do a particular job.
    - Functions provide a way for us to split our programs into small, modular chunks that 
      are easier to organize, test, and use.
    - You can use C++ standard library with already written functions
    - Functions that you write yourself are called user-defined functions.
 */


// - Return type void means the function does not return anything
void test() {
    cout << "testing testing" << endl;
}

int returnsFive(){
    return 5;
}

int multiply(int a, int b){
    return a*b;
}

string createGreeting(string name){
    return "Greetings " + name + "!";

}

int main () {

    // int answer = multiply(5,2);
    // cout << returnsFive() << endl;
    // cout << answer << endl;

    // string name;
    // cout << "What is your name? " << endl;
    // getline(cin, name);
    // cout << createGreeting(name);
    // Greetings Ciantera Rose!

    string name;
     cout << "What is your name? " << endl;
     cin >> name;

     string greetingString = createGreeting(name);
     cout << greetingString;

    return 0;
}
// 5
// 10