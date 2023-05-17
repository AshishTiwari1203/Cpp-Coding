#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void Insertnode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// For CLL display
void print(Node *tail)
{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

// For SLL Display
void display(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "---> ";
        temp = temp->next;
    }
    cout << " null";
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty

        // assuming that "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void InsertAtHead(Node *&head, int d)
{
    // Creating a new node temp
    if (head == NULL)
    {
        Node *newnode = new Node(d);
    }
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

bool iscircular(Node *head)
{
}

int main()
{

    Node *tail = NULL;

    Insertnode(tail, 5, 3);
    print(tail);

    Insertnode(tail, 3, 5);
    print(tail);

    Insertnode(tail, 5, 7);
    print(tail);

    // Insertnode(tail, 7, 9);
    // print(tail);
    // Insertnode(tail, 5, 6);
    // print(tail);

    // Insertnode(tail, 9, 10);
    // print(tail);
    // Insertnode(tail, 3, 4);
    // print(tail);

    Node *head = new Node(34);

    InsertAtHead(head, 23);

    InsertAtHead(head, 41);

    // deleteNode(tail, 5);
    // print(tail);
    // deleteNode(tail, 6);
    // print(tail);
    cout << "CLL: " << endl;
    print(tail);

    cout << "For SLL: " << endl;
    display(head);

    iscircular(tail);
    iscircular(node1);

    return 0;
}