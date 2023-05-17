#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> jagu; // Syntax
    // Functions
    cout << "Memory allocated: " << jagu.capacity() << endl;

    jagu.push_back(1); // Pushing a element
    jagu.push_back(2); // Inside the dynamic array
    jagu.push_back(3);
    jagu.push_back(4);
    cout << "New Memory allocated: " << jagu.capacity() << endl;
    jagu.push_back(5);
    cout << "Value at index: " << jagu.at(2) << endl;
    cout << "First value:" << jagu.front() << "\nLast value" << jagu.back() << endl;
    cout << "BEfore pop: " << endl;
    for (int i = 0; i < jagu.size(); i++)
    {
        cout << jagu[i] << " ";
    }
    cout << endl;

    jagu.pop_back();
    cout << "After pop:" << endl;

    for (int i : jagu)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < jagu.size(); i++)
    {
        cout << jagu[i] << " ";
    }
    cout << endl;
    cout << "-------------Using jagu.clear() function-------------" << endl;
    jagu.clear();

    cout << "New Memory allocated: " << jagu.size() << endl;
    cout << "Capacity: " << jagu.capacity() << endl;
    return 0;
}