#include <iostream>
using namespace std;

int main()
{
    /*for (int j = 0; j <= 255; j++)
    {
        cout << "corresponding char: " << j << ":" << char(j) << endl;
    }*/

    int i = 10;
    int *p = &i;
    cout << "address:" << p << endl;
    cout << "valuE:" << *p << endl;
    cout << "&I: " << &i << endl;
    cout << "Size of ptr:" << sizeof(p) << endl;
    int a;
    int *q;
    q = &a;

    cout << q << endl;
    cout << *q << endl;

    // copying a pointer to other
    int *j = p;
    cout << j << endl
         << p;

    // important
    int k = 3;
    int *t = &k;
    cout << "Jai shree ram" << endl;
    // cout <<  (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;
    return 0;
}