#include <iostream>
#include <math.h>
using namespace std;

void display(int *arr, int size){
    cout<<"Size of array: "<< size << endl;
    for(int i=0; i<size; i++){
        
    }

}

bool search(int *arr, int size, int key)
{   
    display(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    //
    arr = arr + 1;
    bool rem = search(arr, size - 1, key);
    return rem;
}
int main()
{
    int key, arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the key:" << endl;
    cin >> key;
    int ans = search(arr, len, key);
    if (ans)
        cout << "key found";
    else
        cout << "key not found";

    return 0;
}