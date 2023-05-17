#include <iostream>
#include <math.h>
using namespace std;

void selection_sort(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return;

    // Process
    int i = 0;
    int min = i;
    for (int j = i; j < size; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }
    swap(arr[i], arr[min]);

    // Recursive relation
    selection_sort(arr + 1, size - 1);
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

    selection_sort(arr, size);
    display(arr, size);
    return 0;
}