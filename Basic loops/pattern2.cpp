#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - 1; space >= i; space--)
        {
            cout << " ";
        }
        for (int j = i; j > 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}