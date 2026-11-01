//To Implement a C++ Program to Demonstrate Class, Object, Constructor, Destructor and Dynamic Memory Allocation


#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int *marks;

public:

    // Constructor
    Student (int r, int m)
    {
        rollNo = r;

        // Dynamic memory allocation
        marks = new int;
        *marks = m;

        cout << "Constructor called" << endl;
    }

    // Display function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << *marks << endl;
    }

    // Destructor
    ~Student()
    {
        delete marks;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Creating object
    Student s1(101, 85);

    // Display student information
    s1.display();

    return 0;
}
