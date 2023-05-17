#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = 3;
    int cols = 4;
    int total = rows * cols;

    int s = 0;
    int e = total - 1;
    int mid = s + (e - s) / 2;
    int target;
    int found;
    cin >> target;
    while (s <= e)
    {
        int value_mid = arr[mid / cols][mid % cols];
        if (target > value_mid)
        {
            s = mid + 1;
        }
        else if (target < value_mid)
        {
            e = mid - 1;
        }
        else
        {
            found = 1;
            cout << "Your Target is found and it's position is: " << mid;
        }
        mid = s + (e - s) / 2;
    }
    if (found == 0)
    {
        cout << "Target not found";
    }

    return 0;
}