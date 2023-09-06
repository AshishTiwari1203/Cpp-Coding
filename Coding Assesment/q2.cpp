#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j != 0; j--)
        {
            if (j == 1 || j == i)
                cout << i << " ";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j != 0; j--)
        {
            if (j == 1 || j == i)
                cout << i << " ";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}