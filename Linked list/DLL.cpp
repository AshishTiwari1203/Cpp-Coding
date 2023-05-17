#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    node *next;
    int data;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void display(node *head)
{
    node *temp = head;
    for (int i = 1; temp != NULL; i++)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(node *&head)
{
    node *temp = head;
    int count = 0;
    for (int i = 1; temp != NULL; i++)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void InsertAtHead(node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(node *&tail, int data)
{
    if (tail == NULL)
    {
        node *temp = new node(data);
        tail = temp;
    }
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPos(node *&head, node *&tail, int pos, int d)
{
    if (pos == 1)
    {
        InsertAtHead(head, d);
    }

    else
    {
        node *nodetoinsert = new node(d);
        node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        if (temp->next = NULL)
        {
            InsertAtTail(tail, d);
        }

        nodetoinsert->next = temp->next;
        temp->next->prev = nodetoinsert;
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    // Inserting at head
    InsertAtHead(head, 8);
    InsertAtHead(head, 6);
    InsertAtHead(head, 4);
    InsertAtHead(head, 2);
    InsertAtTail(tail, 40);
    InsertAtTail(tail, 50);
    InsertAtPos(head, tail, 3, 69);
    display(head);
    cout << "Lenght of the DLL: " << getlength(head) << endl;

    return 0;
}