#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the length:" << endl;
    cin >> a;
    cout << "enter the breath:" << endl;
    cin >> b;
    cout << "Select the choice\n 1. perimeter\n 2. Area " << endl;
    cin >> c;
    int p = 2 * (a + b);
    int ar = a * b;

    switch (c)
    {
    case 1:
        cout << "the perimeter of rectangle:" << p << endl;
        break;
    case 2:
        cout << "the area of rectangle:" << ar << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}