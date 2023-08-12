#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size += size;
        int index = size;
        arr[index] = val;

        // Now the code for swap
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                // After swap update the index
                index = parent;
            }
            else
            {
                // Every node is at the right place
                return;
            }
        }
    }
};

void heapify(int arr[], int size, int index)
{
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (right <= size && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (left <= size && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify(arr, size, largest);
    }
}

void heapsort(int arr[], int size)
{
    int n = size;
    // Step 1
    while (n > 1)
    {
        swap(arr[n], arr[1]);
        n--;

        // Step 2
        heapify(arr, n, 1);
    }
}

int main()
{
    int arr[6] = {-1, 56, 45, 89, 34, 52};
    int len = 6;
    cout << "Array Elements: " << endl;
    for (int i = 1; i <= len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapsort(arr, len);
    cout << "After sorting: " << endl;
    for (int i = 1; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}