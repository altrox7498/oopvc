/*To Demonstrate Single, Multilevel, and Hierarchical Inheritance and Runtime Polymorphism
Using Virtual Functions in C++*/
#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Single Inheritance
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

// Multilevel Inheritance
class Puppy : public Dog
{
public:
    void sound() override
    {
        cout << "Puppy barks" << endl;
    }
};

// Hierarchical Inheritance
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog d;
    Puppy p;
    Cat c;

    // Calling derived class functions
    d.sound();
    p.sound();
    c.sound();

    // Runtime Polymorphism
    Animal *ptr;

    ptr = &d;
    ptr->sound();

    ptr = &p;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}
