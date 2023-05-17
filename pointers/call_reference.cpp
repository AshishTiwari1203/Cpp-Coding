#include <iostream>
using namespace std;

void update(int &n) // call by reference
{
    n++;
}

int main()
{
    int i;
    int &new_var = i; // creation of reference var
    // new_var is same as i (nick name of i is new_var)
    cin >> i;
    cout << i << endl;
    update(i);
    cout << "Updated value:" << i <<endl;;
    cout << sizeof(new_var);
    return 0;
}