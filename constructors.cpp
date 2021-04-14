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

    private:
        string m_name;
        int m_age;
        string m_gender;
        int m_height;

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

int main()
{
    Student cian = Student("Cian", 33, "Female");
    cian.printInfo();
    cian.setHeight(100);
    cout << "Height: " << cian.getHeight() << endl;
    return 0;
}