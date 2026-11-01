#include <iostream>
using namespace std;

// Abstract Strategy class
class Strategy
{
public:
    virtual void calculate(int a, int b) = 0;

    virtual ~Strategy()
    {
    }
};

// Addition Strategy
class Add : public Strategy
{
public:
    void calculate(int a, int b) override
    {
        cout << "Addition = " << a + b << endl;
    }
};

// Subtraction Strategy
class Subtract : public Strategy
{
public:
    void calculate(int a, int b) override
    {
        cout << "Subtraction = " << a - b << endl;
    }
};

// Context class
class Context
{
private:
    Strategy *strategy;

public:
    Context(Strategy *s)
    {
        strategy = s;
    }

    void execute(int a, int b)
    {
        strategy->calculate(a, b);
    }
};

int main()
{
    Add add;
    Context c1(&add);
    c1.execute(10, 5);

    Subtract sub;
    Context c2(&sub);
    c2.execute(10, 5);

    return 0;
}