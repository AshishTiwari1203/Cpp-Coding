#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Now we will be learning about map data structute in which data is been
//  stored in "KEY : VALUE" type

int main()
{
    unordered_map<int, string> jai;

    for (auto i = 0; i < 5; i++)
    {
        cin >> jai[i];
    }

    for (auto i : jai)
    {
        cout << i.first << " : " << i.second << endl;
    }

    cout << "finding Ash: " << jai.count(1);
    return 0;
}