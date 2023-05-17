#include <iostream>
#include <math.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    // Process
    int ele = arr[s];
    int count = 0;
    for (int i = 0; i <= e; i++)
    {
        if (arr[i] < ele)
        {
            count++;
        }
    }
    int eleIndex = s + count;
    swap(arr[s], arr[eleIndex]);

    // Loop for arranging the elements
    int i = s;
    int j = e;
    while (i < eleIndex && j > eleIndex)
    {
        while (arr[i] < ele)
        {
            i++;
        }
        while (arr[j] > ele)
        {
            j--;
        }
        if (i < eleIndex && j > eleIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return eleIndex;
}

void quick_sort(int arr[], int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Process
    int p;
    p = partition(arr, s, e);

    // Recursive relation

    // Left part
    quick_sort(arr, s, p - 1);

    // Right part
    quick_sort(arr, p + 1, e);
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
    int arr[] = {2, 4, 10, 13, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);
    display(arr, n);

    return 0;
}