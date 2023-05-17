/*#include <iostream>
using namespace std;
int main()
{
    int a = 13;
    int b = 22;
    int *g = &b;
    int *s = &a;

    cout << a << endl;
    cout << g << endl;

    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int marks[] = {22, 34, 56, 72, 51};
    cout << "The first element of the Array is: " << marks[2] << endl;
    int x[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
