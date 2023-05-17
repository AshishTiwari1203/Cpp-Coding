#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = 1, end = (n - 1);

    for (int start = 0; start < end; start++)
    {

        swap(arr[start], arr[end]);
        end--;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}