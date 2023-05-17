#include <iostream>
#include <cmath>
using namespace std;

bool is_arm(int num)
{
    int a = num;
    int sum = 0;
    for (; a > 0; a = a / 10)
    {
        int rem = a % 10;
        int cube = rem * rem * rem;
        sum = sum + cube;
    }

    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout << "enter your number: ";
    cin >> num;
    if (is_arm(num) == 1)
    {
        cout << "Is Armstrong";
    }
    else
    {
        cout << "fuck off you bitch";
    }
    return 0;
}