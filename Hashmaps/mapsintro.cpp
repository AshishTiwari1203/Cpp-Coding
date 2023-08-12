#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // Creation

    unordered_map<string, int> m;

    // Insertion
    // 1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    // 2
    pair<string, int> p2("love", 2);
    m.insert(p2);

    // 3
    m["mera"] = 1;
    m["mera"] = 3;

    // Search
    cout << m["mera"] << endl;
    cout << m["babbar"] << endl;

    cout << m.at("love") << endl;

    // A new entry will be created
    cout << m["Unknown_key"] << endl;

    // Size
    cout << "Checking size: " << endl;
    cout << m.size() << endl;

    // To check whether the key is present or not
    cout << "Check for Key: " << endl;
    cout << m.count("love") << endl;
    cout << m.count("jagu") << endl;

    // Erase a key
    m.erase("love");
    cout << "Updated size after removing love: " << m.size() << endl;

    // Accessing
    // 1
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    // 2

    return 0;
}