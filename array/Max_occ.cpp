#include <iostream>
#include <string>
using namespace std;

char maxo_cc(string str)
{
    int count[26] = {0};
    int ans = 0, calc = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int num = ch - 'a';
        count[num]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > calc)
        {
            ans = i;
            calc = count[i];
        }
    }
    char final = ans + 'a';
    return final;
}
int main()
{
    string name = "sidid";
    char ch = maxo_cc(name);
    cout << ch;
    return 0;
}