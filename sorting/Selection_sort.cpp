#include <iostream>
using namespace std;
void Selection_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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
    cout << "\nThis is the program for Selection sort Lessss Go!: " << endl;
    Selection_sort(arr, a);
    display(arr, a);

    return 0;
}