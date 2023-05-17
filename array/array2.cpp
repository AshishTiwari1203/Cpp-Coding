#include <iostream>
#include <climits>
using namespace std;

int linersearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;

    int main()
    {
        int n;
        cout << " Enter the capacity of the Array: " << endl;
        cin >> n;
        int arr[n];
        cout << "enter the values of Array: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cout << "enter the key value: " << endl;
        cin >> key;
        cout << "the index number of key is: " << linersearch(arr[], n, key) << endl;

        return 0;
    }