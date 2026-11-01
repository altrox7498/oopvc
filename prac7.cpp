#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z;
    float tx, ty, tz;
    float sx, sy, sz;
    float angle, rad;
    float xr, yr, zr;

    // Input original point
    cout << "Enter point (x y z): ";
    cin >> x >> y >> z;

    // Input translation values
    cout << "Enter translation (tx ty tz): ";
    cin >> tx >> ty >> tz;

    // Input scaling factors
    cout << "Enter scaling factors (sx sy sz): ";
    cin >> sx >> sy >> sz;

    // Input rotation angle
    cout << "Enter rotation angle in degrees: ";
    cin >> angle;

    // Convert degrees into radians
    rad = angle * 3.14159265 / 180.0;

    // Display original point
    cout << "\nOriginal Point: ("
         << x << ", " << y << ", " << z << ")" << endl;

    // Apply Translation
    x = x + tx;
    y = y + ty;
    z = z + tz;

    // Apply Scaling
    x = x * sx;
    y = y * sy;
    z = z * sz;

    // Apply Rotation about Z-axis
    xr = x * cos(rad) - y * sin(rad);
    yr = x * sin(rad) + y * cos(rad);
    zr = z;

    // Display transformed point
    cout << "\nTransformed Point: ("
         << xr << ", " << yr << ", " << zr << ")" << endl;

    return 0;
}