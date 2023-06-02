#include <iostream>
using namespace std;

bool ispossible(int w, int l)
{
    if (w % 2 != 0 && l % 2 != 0)
    {
        return false;
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (2 * (w * l) == 4)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    // your code goes here
    int w, l, t;
    cin >> t;
    while (t--)
    {
        cin >> w >> l;
        if (ispossible(w, l))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
