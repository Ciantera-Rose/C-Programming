#include <iostream>
#include <string>
using namespace std;

/* 
    Inheritance:

    - Inheritance makes it possible to inherit attributes and methods from one class to another. 
      It involves creating new objects by directly acquiring the attributes and behaviors of other 
      objects and then extending or specializing them.

    - Inheritance is useful for code reusability. You can reuse attributes and methods of an 
      existing class when you create a new class.

    - We group the “inheritance concept” into two categories:
      derived class (child) - the class that inherits from another class
      base class (parent) - the class being inherited from
 */

class Student 
{   
    private:
        int m_age;
        string m_gender;
        int m_height;

    protected:
          string m_name;

    public:
       
    Student(string n, int a, string g)
    {
        m_name = n;
        m_age = a;
        m_gender = g;
        m_height = 50;
    }

    void printInfo()
    {
        cout << "Name: " << m_name << endl;
        cout << "Age: " << m_age << endl;
        cout << "Gender: " << m_gender << endl;
        cout << "Height: " << m_height << endl;
    }

    void setHeight(int h) 
    {
        if(h > 0) {
            m_height = h;
        } else {
            m_height = 0;
        }
    }

    int getHeight() 
    {
        return m_height;
    }
};

// Inherit from Student class
class Employee : public Student
{
    public:
    int salary;
        Employee(string n, int a, string g) : Student(n, a, g) {
            salary = 100;
    }

    void printSalary() {
        cout << "Salary: " << m_name << " is " << salary << endl;
    }
};


int main()
{
    Employee cian = Employee("Cian", 33, "Female");
    cian.printInfo();
    //cian.setHeight(100);
    cian.printSalary();
    cout << "Height: " << cian.getHeight() << endl;

    return 0;
}