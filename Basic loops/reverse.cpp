/* By while loop
#include <iostream>
using namespace std;
int main()
{
    int n1, reverse = 0, r;
    cout << "Enter a number\n";
    cin >> n1;
    while (n1 > 0)
    {
        r = n1 % 10;
        n1 = n1 / 10;
        reverse = (reverse * 10) + r;
    }
    cout << "The reverse number:" << reverse << endl;

    return 0;
}*/
// For loop
#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, remainder;
    cin >> n;
    for (; n > 0; n = n / 10)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
    }
    cout << "The reverse number is:" << reverse << endl;

    return 0;
}