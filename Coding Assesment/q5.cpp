#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, r, c;
    cin >> t;

    while (t--)
    {
        cin >> r, c;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
}