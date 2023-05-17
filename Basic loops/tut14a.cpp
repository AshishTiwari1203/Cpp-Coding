#include <iostream>
using namespace std;
void fib(int num)
{
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << ", ";
        next = t2 + t1;
        t1 = t2;
        t2 = next;
    }
}

int main()
{
    int a;
    cin >> a;
    fib(a);

    return 0;
}