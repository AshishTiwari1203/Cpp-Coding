#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> name;
    name.push("Ashish");
    name.push("Ashok");
    name.push("Anita");
    name.push("Jaddu");
    cout << name;
    return 0;
}