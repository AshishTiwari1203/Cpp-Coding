#include <iostream>
#include <string>
using namespace std;

void replacestr(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '@';
        }
    }
}
int main()
{
    string s = "Ashish kumar Tiwari";
    replacestr(s);
    cout << s;
    return 0;
}