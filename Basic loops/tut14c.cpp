#include <iostream>
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

int ncr(int n, int r)
{
    int com;
    com = myfac(n) / (myfac(n - r) * myfac(r));
    return com;
}
int main()
{
    int n, term;
    cout << " Pascal triangle of: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            term = ncr(i, j);
            cout << term << "\t";
        }
        cout << endl;
    }

    return 0;
}