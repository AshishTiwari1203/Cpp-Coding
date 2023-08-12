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

    // Print function
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Heapify Algo(Ologn)
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    // Conditions
    if (right < size && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (left < size && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    return 0;
}