#include <iostream>
#include <string>
using namespace std;

/*
    OOP: 
    - In OOP it’s useful to want our types to not only hold data, but provide functions that work with the data as well.
    - Functions defined inside of a class are called member functions or methods.
    - Methods can be defined inside or outside of the class definition
    - The class keyword defines a new user-defined type called a class.
    - The public keyword is also used before declaring the member variables.
    - An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated, 
      like when an object is created, memory is allocated. So a class is a user-defined data type that we can use in our 
      program, and it works as an object constructor, or a “blueprint” for creating objects.

*/

/*
class DateClass 
{
    public:
    int m_year;
    int m_month;
    int m_day;

    void print()
    {
         cout << "The date today is " << m_month << "/" << m_day << "/" << m_year << endl;
    }
};

int main () 
{
    DateClass today = {2021, 04, 14};

    today.print();
    return 0;
}
// The date today is 4/14/2021
*/

/*
class Employee 
{
    public:
    string m_name;
    int m_id;
    double m_wage;

    void printEmployeeInfo()
    {
        cout << "Name: " << m_name << " " <<  "ID: " << m_id << " " << "Wage: $" << m_wage << endl;
    }
};

int main ()
{
    Employee cian = {"Ciantera", 112, 60000.0};

    cian.printEmployeeInfo();
    return 0;
}
// Name: Ciantera ID: 112 Wage: $60000
*/

class Person 
{
    public:
        string m_name;
        int m_age;
        string m_gender;

        void printInfo()
        {
            cout << "Name: " << m_name << endl;
            cout << "Age: " << m_age << endl;
            cout << "Gender: " << m_gender << endl;
        }
};

int main()
{ 
    Person cian = { "Cian", 33, "Female" };
    // cout << cian.name << endl;
    cian.printInfo();
    return 0;
}