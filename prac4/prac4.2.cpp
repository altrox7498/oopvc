#include <iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *object;

    // Private constructor
    Singleton()
    {
        cout << "Singleton object created" << endl;
    }

public:
    // Static method to create and return a single object
    static Singleton* getInstance()
    {
        if (object == NULL)
        {
            object = new Singleton();
        }

        return object;
    }

    void show()
    {
        cout << "Only one object is used." << endl;
    }
};

// Initialize static pointer
Singleton* Singleton::object = NULL;

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();

    s1->show();

    if (s1 == s2)
    {
        cout << "Both are the same object." << endl;
    }

    return 0;
}