#include <iostream>
#include <climits>
using namespace std;

void display(int arr[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void getinput(int arr[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

bool ispresent(int arr[][10], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int largest_sum(int arr[][10], int row, int col)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {

            maxi = sum;
        }
    }
    return sum;
}
int main()
{
    int arr[10][10];
    cout << "Enter the elements: " << endl;
    getinput(arr, 3, 3);
    cout << "The elements:" << endl;
    display(arr, 3, 3);
    cout << " Enter the element to search " << endl;
    int target;
    cin >> target;
    if (ispresent(arr, 3, 3, target))
    {
        cout << " Element found " << endl;
    }
    else
    {
        cout << " Not Found" << endl;
    }

    int ansIndex = largest_sum(arr, 3, 3);
    cout << " Max sum " << ansIndex << endl;
    return 0;
}