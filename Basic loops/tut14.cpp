#include <iostream>
using namespace std;
int numrev(int num)
{
    int rem, rev = 0;
    for (; num > 0; num = num / 10)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        }
    return rev;
}
int main()
{
    int a;
    cout << "Enter the number for its reverse:" << endl;
    cin >> a;
    cout << numrev(a);
    return 0;
}