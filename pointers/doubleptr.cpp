#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "location of i:" << ptr << endl;
    cout << "Location of pointer 1: " << ptr2 << " " << &ptr << endl;
    cout << "value of pointer 1: " << *ptr << endl;
    cout << "value at pointer 2 equal: " << &ptr << "=" << ptr2 << endl;

    return 0;
}