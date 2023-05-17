#include <iostream>
#include <math.h>
using namespace std;
int myfac(int num)
{
    int multi = 1;
    for (int i = 1; i <= num; i++)
    {
        multi = multi * i;
    }
    return multi;
}

int main()
{
    int n, r;
    float com;
    cout << "Enter n and c :" << endl;
    cin >> n >> r;
    com = (myfac(n) / (myfac(n - r) * myfac(r)));
    cout << com;
    return 0;
}