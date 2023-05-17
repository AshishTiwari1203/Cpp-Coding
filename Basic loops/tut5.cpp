#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12, b = 3;
    cout << "The numbers are " << a << " and " << b << endl;
    cout << "the a+b operator " << a + b << endl;
    cout << "the a-b operator " << a - b << endl;
    cout << "the a*b operator " << a * b << endl;
    cout << "the a++ operator " << a++ << endl;
    cout << "the a-- operator " << a-- << endl;
    cout << "the ++a operator " << ++a << endl;
    cout << "the --a operator " << --a << endl;
    cout << endl;
    cout << endl;

    // comparison operator
    cout << "We will some comparison operators:\n";
    cout << "a==b:" << (a == b) << endl;
    cout << "a!=b:" << (a != b) << endl;
    cout << "a>=b:" << (a >= b) << endl;
    cout << "a<=b:" << (a <= b) << endl;
    cout << "a>b:" << (a > b) << endl;
    cout << "a<b:" << (a < b) << endl;
    cout << endl;

    // Logical operators
    cout << "these are some of the logical operators" << endl;
    cout << "The value of this(&&) logical operator " << ((a == b) && (a > b)) << endl;
    cout << "The value of this(||) logical operator " << ((a == b) || (a > b)) << endl;
    cout << "The value of this(!) logical operator " << !(a == b) << endl;
    return 0;
}