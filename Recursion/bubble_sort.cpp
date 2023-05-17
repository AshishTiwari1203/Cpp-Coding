#include <iostream>
#include <math.h>
using namespace std;

void bubble_sort(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return;

    // process
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive relation
    bubble_sort(arr, size - 1);
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

    bubble_sort(arr, size);
    display(arr, size);
    return 0;
}