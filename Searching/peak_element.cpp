#include <iostream>
using namespace std;

int peakelement(int arr[], int size)
{
    int s = 0;
    ;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return arr[e];
}

int main()
{
    int arr[] = {0, 10, 5, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int peak = peakelement(arr, len);
    cout << "The peak element: " << peak;
    return 0;
}