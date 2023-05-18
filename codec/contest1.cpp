#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;

        if (x % 2 == 0 && x % 7 == 0)
        {
            cout << "Alice";
        }
        else if (x % 2 != 0 && x % 9 == 0)
        {
            cout << "Bob";
        }
        else
            cout << "Charlie";

        cout << endl;
        }
    return 0;
}