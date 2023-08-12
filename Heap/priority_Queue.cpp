#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> maxheap;
    cout << "Pushing Elements: " << endl;
    maxheap.push(34);
    maxheap.push(44);
    maxheap.push(14);
    maxheap.push(4);
    maxheap.push(54);
    maxheap.push(49);

    cout << "Top: " << maxheap.top() << endl;
    maxheap.pop();
    cout << "Element Popped: " << endl;
    cout << "Top: " << maxheap.top() << endl;
    maxheap.pop();
    cout << "Element Popped: " << endl;
    cout << "Top: " << maxheap.top() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    cout << "Min Heap: " << endl;
    minheap.push(34);
    minheap.push(44);
    minheap.push(14);
    minheap.push(4);
    minheap.push(54);
    minheap.push(49);

    cout << "Top: " << minheap.top() << endl;
    minheap.pop();
    cout << "Element Popped: " << endl;
    cout << "Top: " << minheap.top() << endl;
    minheap.pop();
    cout << "Element Popped: " << endl;
    cout << "Top: " << minheap.top() << endl;
    return 0;
}