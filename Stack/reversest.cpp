#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    stack<char> st;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    int len = str.length();
    string rev;

    for (int i = 0; i < len; i++)
    {

        st.push(str[i]);
    }

    cout << "Displaying the reverse list: " << endl;

    while (!st.empty())
    {
        rev.push_back(st.top());
        st.pop();
    }

    cout << rev;

    return 0;
}