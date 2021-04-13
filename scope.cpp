#include <iostream>
#include <string>
using namespace std;


// global variable available to all functions
// dangerous, must watch for bugs in larger programs and pay attn to where they are changed.
int globalNumber = 10;

// helloString is local to the scope of this funciton
void printHello(){
    string helloString = "Hello! ";
    globalNumber = 4;
    cout << helloString << "globalNumber: " << globalNumber << endl;
}

// a local to scope of test function
void test() {
    int a = 0;
    //cout << "test " << a << endl;
    cout << "test " << "globalNumber: " << globalNumber << endl;
}

int main(){

    // helloString cannot be accessed here
    printHello();
    test();

    // scope
    int b = 15;
    if (b < 20){
        int age = 33;
        cout << age << endl;
        //age local to block
    }
    // age does not work here
    else {
        int newAge = 40;
        cout << newAge << endl;
    }

    // age and newAge do not work here

    return 0;
}