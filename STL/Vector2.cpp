#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> vecarr)
{
    for (int i : vecarr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a(6, 2); /* create a vector a with size==6 and
       initialize all its elements with the value 2*/
    cout << "Printing a: " << endl;
    display(a);
    vector<int> jagu = {1, 2, 3, 4, 5, 6};
    cout << "Printing jagu: " << endl;
    display(jagu);
    vector<int> cjagu(jagu); // copying elements of "jagu" in "cjagu"
    vector<int> ca(a);       // copying elements of "a" in "ca"
    cout << "Value in cjagu: " << endl;
    display(cjagu);
    cout << "Value in ca: " << endl;
    display(ca);

    return 0;
}