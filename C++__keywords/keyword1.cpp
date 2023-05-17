#include <iostream>
#include <math.h>
using namespace std;

#define pi 3.14 // Defining a globally recognized Macro

float recper(int length, int breath = 34)
{ // Default argument
    int total;
    total = 2 * (length + breath);
    return total;
}

float circle_area(int radius = 2) // Default argument is used
{
    int area;
    area = pi * radius * radius;
    return area;
}

int main()
{
    int ch, l, b, r;
    cout << "Enter your choice:\n1)rectangular Perimeter\n2)Area of circle\n";
    cin >> ch;
    if (ch == 1)
    {
        int perimeter;
        cout << "Enter length and breath:" << endl;
        cin >> l >> b;
        perimeter = recper(l);
        cout << perimeter << " Is the required ans";
    }
    else if (ch == 2)
    {
        int area, r;
        cout << "Enter the radius of circle:" << endl;
        cin >> r;
        area = circle_area(); // No value is passed
        cout << "Area: " << area << endl;
    }
    else
    {
        cout << "Envalid choice";
    }
    return 0;
}