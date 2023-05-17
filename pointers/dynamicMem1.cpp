#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // n is the size of array
    // If you want dynamic memory allocation
    int *a = new int[n]; // "new" keyword must be used
    int *digit = new int;

    char *ptr = new char;
    *ptr = 'Ashish';
    cout << *ptr << endl;
    cout << ptr;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << *(a + 3);
    return 0;
}