#include <iostream>
using namespace std;

void printarr(int arr[], int size)
{
    cout << "Following array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void scanarr(int arr[], int size)
{
    cout << "Enter the elements of the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int binarysearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key == arr[mid])
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    scanarr(arr, n);
    cout << "Enter the key value: ";
    cin >> key;
    int val = binarysearch(arr, key, n);
    if (val == -1)
    {
        cout << "Key not found";
    }
    else
    {
        cout << "The index of " << key << " is: " << val;
    }
    return 0;
}