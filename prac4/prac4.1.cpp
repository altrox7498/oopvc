/*To implement C++ programs for Factory Design Pattern, Singleton Design Pattern, and
Strategy Design Pattern.*/
#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    virtual void show()
    {
        cout << "Vehicle" << endl;
    }

    virtual ~Vehicle()
    {
    }
};

// Derived class Car
class Car : public Vehicle
{
public:
    void show() override
    {
        cout << "Car is created" << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle
{
public:
    void show() override
    {
        cout << "Bike is created" << endl;
    }
};

// Factory class
class VehicleFactory
{
public:
    static Vehicle* createVehicle(int choice)
    {
        if (choice == 1)
            return new Car();
        else if (choice == 2)
            return new Bike();
        else
            return nullptr;
    }
};

// Main function
int main()
{
    Vehicle *v;

    v = VehicleFactory::createVehicle(1);

    if (v != nullptr)
    {
        v->show();
        delete v;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
} 