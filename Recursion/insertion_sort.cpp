#include <iostream>
#include <math.h>
using namespace std;

void sortarr(int arr[], int start, int size)
{
    // base case
    if (start == size)
        return;

    // Process
    int current = arr[start];
    for (int j = start; j >= 0; j--)
    {
        if (arr[j] > current)
        {
            // shift
            arr[j + 1] = arr[j];
            arr[j] = current;
        }
    }

    // Relation
    start++;
    sortarr(arr, start, size);
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 8, 9, 4, 3, 67, 45, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortarr(arr, 1, size);
    display(arr, size);
    return 0;
}