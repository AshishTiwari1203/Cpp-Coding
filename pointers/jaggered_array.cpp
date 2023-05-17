#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows:" << endl;
    cin >> row;

    int **array = new int *[row];
    int *col = new int[row];
    for (int i = 0; i < row; i++)
    {
        cin >> col[i];
        array[i] = new int[col[i]];
    }

    // input
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cin >> array[i][j];
        }
    }

    // output

    cout << "The elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}