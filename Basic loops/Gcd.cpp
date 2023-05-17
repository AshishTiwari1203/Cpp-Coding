#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a >= b)
    {
        int gcd = 1;
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
    else
    {
        int gcd = 1;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int final = gcd(a, b);
    cout << "Gcd of num: " << final << endl;
    return 0;
}