#include <iostream>
#include <string>
using namespace std;

// Converting ch to lower case

/*char lower_case(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}
// converting ch to uppercase
void upper_case(char var)
{
    if (var >= 'A' && var <= 'Z')
    {
        return var;
    }
    else
    {
        return ch - 'a' + 'A';
    }
}*/
int main()
{
    char arr[] = "AShish Kumar Tiwari";
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
        else
        {
            continue;
        }
    }
    cout << arr;
    return 0;
}