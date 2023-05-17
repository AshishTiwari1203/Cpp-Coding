#include <iostream>
using namespace std;
void inparray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
void outarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void alterswap(int array[], int size)
{
    for (int i = 0; i < size; i += 2)// i position will go 2 places ahead
    {
        if ((i + 1 < size))
        {
            swap(array[i + 1], array[i]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    inparray(arr, n);
    alterswap(arr, n);//only variable name in array not []
    outarray(arr, n);
    return 0;
}