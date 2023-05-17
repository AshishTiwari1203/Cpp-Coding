#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    char alpha;
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            alpha = 'A' + n - i;
            cout << alpha << " ";

            j++;
        }
        cout << endl;
        alpha++;
        i++;
    }
    return 0;
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
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
*/