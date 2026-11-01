#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x1 = 2, y1 = 3;
    int x2 = 10, y2 = 7;

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;

    int p = dx - dy;

    cout << "Bresenham Line Points:" << endl;

    while (true)
    {
        cout << "(" << x1 << "," << y1 << ")" << endl;

        if (x1 == x2 && y1 == y2)
            break;

        int e2 = 2 * p;

        if (e2 > -dy)
        {
            p = p - dy;
            x1 = x1 + sx;
        }

        if (e2 < dx)
        {
            p = p + dx;
            y1 = y1 + sy;
        }
    }

    return 0;
}