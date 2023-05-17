#include <iostream>
#include <math.h>
using namespace std;
void home(int start, int end)
{
    cout << start << " " << end << endl;
    // base case
    if (start == end)
    {
        cout << "Reached home(ballee ballee)" << endl;
        return;
    }
    start++;
    home(start, end);
    cout << start << " " << end << endl;
}

int main()
{
    int start, end;
    cin >> start >> end;
    home(start, end);

    return 0;
}