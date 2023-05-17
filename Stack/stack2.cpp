#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Stack
{
    // Properties of the stack
public:
    int *arr;
    int top;
    int size;

    // Behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Opreation
    void push(int val)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = val;
        }
        else
        {
            cout << "Overflow";
        }
    }

    void pop()
    {
        if (top == -1)
            cout << "Empty stack";
        else
        {
            top--;
        }
    }

    bool empty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    int peek()
    {
        return arr[top];
    }

    void display()
    {
        int a = top;
        for (int i = a; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack st(45);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << "Display: " << endl;
    st.display();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if (st.empty())
    {
        cout << "Stack is Empty mere dost " << endl;
    }
    else
    {
        cout << "Stack is not Empty mere dost " << endl;
    }
    return 0;
}