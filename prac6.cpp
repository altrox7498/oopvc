#include <iostream>
#include <cmath>
using namespace std;

// Function to multiply matrix with point
void multiply(float matrix[3][3], float point[3])
{
    float result[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i] += matrix[i][j] * point[j];
        }
    }

    cout << "New Point = ("
         << result[0] << ", "
         << result[1] << ")" << endl;
}

int main()
{
    float point[3] = {2, 3, 1};

    // Translation
    float translation[3][3] =
    {
        {1, 0, 5},
        {0, 1, 4},
        {0, 0, 1}
    };

    // Scaling
    float scaling[3][3] =
    {
        {2, 0, 0},
        {0, 2, 0},
        {0, 0, 1}
    };

    // Rotation by 90 degrees
    float angle = 90 * 3.14159 / 180;

    float rotation[3][3] =
    {
        {cos(angle), -sin(angle), 0},
        {sin(angle), cos(angle), 0},
        {0, 0, 1}
    };

    // Reflection about X-axis
    float reflection[3][3] =
    {
        {1, 0, 0},
        {0, -1, 0},
        {0, 0, 1}
    };

    // X-Shearing
    float shearing[3][3] =
    {
        {1, 1, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    cout << "Original Point = (2, 3)" << endl;

    cout << "After Translation:" << endl;
    multiply(translation, point);

    cout << "After Scaling:" << endl;
    multiply(scaling, point);

    cout << "After Rotation:" << endl;
    multiply(rotation, point);

    cout << "After Reflection:" << endl;
    multiply(reflection, point);

    cout << "After Shearing:" << endl;
    multiply(shearing, point);

    return 0;
}