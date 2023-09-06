#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int counter = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n || j == 0 || j == n)
            {
                cout << " * ";
            }
            else
            {
                if (counter == 26)
                {
                    counter = 0;
                }
                cout << " " << char(counter + 65) << " ";
                counter++;
            }
        }
        cout << endl;
    }
    return 0;
}