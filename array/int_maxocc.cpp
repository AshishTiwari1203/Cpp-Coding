#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 4, 5, 3, 3, 3, 3, 7, 7, 7, 7, 7, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = 0, mov;
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = i; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            mov = arr[i];
        }
    }
    cout << "Maximum occured value: " << mov << endl;
    cout << "number of occurance: " << max;
    return 0;
}