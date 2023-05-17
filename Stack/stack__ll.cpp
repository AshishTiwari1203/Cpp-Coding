#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    // constructor
    node(int d)
    {
        this->val = d;
        this->next = NULL;
    }
};

class myst
{
public:
    node *head;
    int len;

    // Constructor
    myst()
    {
        head = NULL;
        len = 0;
    }

    // Functions
    void push(int d)
    {
        node *temp = new node(d);
        temp->next = head;
        head = temp;
        len++;
    }

    void pop()
    {
        node *temp;
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        len--;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Empty List";
        }

        return head->val;
    }

    int size()
    {
        return len;
    }

    bool isempty()
    {
        if (head == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    myst st;

    // Push operation
    st.push(42);
    st.push(62);
    st.push(82);
    st.push(102);

    display()

    //pop operation 
    st.pop)

    return 0;
}