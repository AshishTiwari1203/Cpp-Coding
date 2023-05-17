#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, min = INT_MAX;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        int n = array[i];
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
    }
    cout << "the maximum term: " << max << endl;
    cout << "the minimum term: " << min << endl;

    return 0;
}