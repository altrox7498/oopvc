/*To initialize a graphics window and draw basic shapes such as line, circle, and rectangle using
C++ graphics programming.*/

#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

int main()
{
    // Initialize graphics window
    initwindow(800, 600, "Basic Graphics");

    // Draw a line
    line(100, 100, 300, 100);

    // Draw a circle
    circle(200, 250, 80);

    // Draw a rectangle
    rectangle(400, 150, 650, 300);

    // Wait for key press
    getch();

    // Close graphics window
    closegraph();

    return 0;
}