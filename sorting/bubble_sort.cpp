#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size -i- 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    int arr[] = {1, 9, 5, 45, 32, 2, 1, 49, 72};
    int a = sizeof(arr) / sizeof(arr[0]); // For finding the length of the array
    cout << "The Given array: \n";
    display(arr, a);
    cout << "\nThis is the program for bubble sort Lessss Go!: " << endl;
    bubble_sort(arr, a);
    display(arr, a);

    return 0;
}