#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        // int value = this->data;
        //  Memory free

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void InsertAtHead(node *&head, int d)
{
    // Creating a new node temp
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void InsertAtMiddle(node *&head, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtHead(head, data);
    }
    node *nodetoinsert = new node(data);
    node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// Deletion code
void deletehead(node *&head)
{
    node *temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;
}
void deletenode(node *&head, int pos)
{
    if (pos == 1)
    {
        deletehead(head);
    }

    else
    {
        node *prev = NULL;
        node *current = head;

        for (int i = 1; i < pos; i++)
        {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}
void display(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "---> ";
        temp = temp->next;
    }
    cout << " null";
}

int main()
{
    node *node1 = new node(21);
    node *head = node1;
    node *tail = node1;

    InsertAtHead(head, 45);
    InsertAtHead(head, 24);
    InsertAtHead(head, 14);
    InsertAtMiddle(head, 2, 81);
    display(head);

    return 0;
}