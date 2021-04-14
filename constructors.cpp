#include <iostream>
#include <string>

using namespace std;

/* 
    Consructors:
    - Constructors are a way that we an initialize our objects
    - Is a special method that is automatically called when an object of a class is created.
    - To create a constructor, use the same name as the class, followed by parentheses ():
 */


class Student 
{   
    public:
    string m_name;
    int m_age;
    string m_gender;

    Student(string n, int a, string g)
    {
        m_name = n;
        m_age = a;
        m_gender = g;
    }

    void printInfo()
    {
        cout << "Name: " << m_name << endl;
        cout << "Age: " << m_age << endl;
        cout << "Gender: " << m_gender << endl;
    }
};

int main()
{
    Student cian = Student("Cian", 33, "Female");
    cian.printInfo();

    return 0;
}