#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4}; // Syntax

    // Functions
    cout << "Size of array:" << a.size() << endl;
    cout << "value at second index:" << a.at(2) << endl;  // value at index=2
    cout << "1st value:" << a.front() << endl;            // value at first index
    cout << "last value:" << a.back() << endl;            // value at index last index
    cout << "Bool value of empty: " << a.empty() << endl; // Checking is the array empty

    return 0;
}