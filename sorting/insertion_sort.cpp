#include <iostream>
using namespace std;
void insertion_for(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // Shift
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
}
void insertion_while(int arr[], int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // Shift
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            j--;
        }
        i++;
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
    int arr[] = {17, 9, 5, 45, 32, 2, 1, 49, 72};
    int a = sizeof(arr) / sizeof(arr[0]); // For finding the length of the array
    cout << "The Given array: \n";
    display(arr, a);
    // cout << "\nThis is the program for Insertion Sort(For loop) Lessss Go!: " << endl;
    // insertion_for(arr, a);
    cout << "\nThis is the program for Insertion Sort(While loop) Lessss Go!: " << endl;
    insertion_while(arr, a);
    display(arr, a);

    return 0;
}
