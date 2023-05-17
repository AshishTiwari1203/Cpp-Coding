#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void returnchar(int a, string ch[])
{
    int digit;
    // base case
    if (a == 0)
    {
        return;
    }
    digit = a % 10;
    a = a / 10;
    returnchar(a, ch);
    cout << ch[digit] << " ";
}
int main()
{
    int a;
    cin >> a;
    string ch[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    returnchar(a, ch);

    return 0;
}