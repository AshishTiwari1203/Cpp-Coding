#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void counting(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    counting(n - 1);
}
int main()
{
    int n, fact;
    cin >> n;
    fact = factorial(n);
    cout << fact << endl;
    counting(n);

    return 0;
}