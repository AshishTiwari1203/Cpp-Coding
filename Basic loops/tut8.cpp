#include <iostream>
using namespace std;
/*int main()
{
    int a;
    cout << "Enter the number:\n";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "even\n";
    }
    else
    {
        cout << "odd\n";
    }

    return 0;
}*/

int main()
{
    int a, b, c;
    cout << "Enter the first number:\n";
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    cout << "the third number:" << endl;
    cin >> c;
    cout << "the max number is:" << endl;
    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}
/*int main()
{
    int marks;
    cout << "Enter your JEE score:" << endl;
    cin >> marks;
    if (marks > 180)
    {
        if (marks > 230)
        {
            cout << "IIT BOMBAY" << endl;
        }
        else if (marks > 210)
        {
            cout << "IIT DELHI" << endl;
        }
        else
        {
            cout << "IIT KGP" << endl;
        }
    }
    else if (marks > 130)
    {
        if (marks > 150)
        {
            cout << "NIT SURATKAL" << endl;
        }
        else
        {
            cout << "NIT HAMIRPUR" << endl;
        }
    }
    else
    {
        cout << "MIT\n";
    }

    return 0;
}*/