#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    queue<int> q;

    q.push(12);
    q.push(13);
    q.push(14);

    cout << "Size of q: " << q.size() << endl;
    cout << "Empty or not: " << q.empty() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "End element: " << q.back() << endl;

    return 0;
}