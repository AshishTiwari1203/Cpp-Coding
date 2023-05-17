#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*const int a = 22;
    int const b = 4;
    cout << "The value of a and b:" << a << endl;
    // a = 12;
    cout << "The new values of a and b:" << a << endl;*/
    // int a=12,b=45,c=56;
    // cout << ""

    // Operator Precedence
    int a = 3,
        b = 4;
    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;

    return 0;
}