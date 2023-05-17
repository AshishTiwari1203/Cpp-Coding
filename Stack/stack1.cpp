#include <bits/stdc++.h>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
    // Stack Creation
    stack<int> st;

    // Stack Push
    st.push(14);
    st.push(65);
    st.push(69);
    st.push(2);

    // Szie of the stack
    int len = st.size();

    cout << "The stack: " << endl;
    while (!st.empty()) // Checking whether the stack is empty or not
    {
        cout << st.top() << " "; // Accessing the Top element
        st.pop();                // Pop operation
    }

    return 0;
}