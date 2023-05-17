#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n; space >= i; space--)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = i; j > 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= i; i--)
    {
        for (int space = n; space >= i; space--)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 1; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}