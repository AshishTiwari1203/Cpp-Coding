#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Making the node class
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void insert(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return;
    }

    if (data < root->data)
    {
        insert(root->left, data);
    }
    if (data > root->data)
    {
        insert(root->right, data);
    }
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insert(root, data);
        cin >> data;
    }
}

// For level Order we always use the concept of seperator
void level(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front(); // Taking the front element
        q.pop();

        if (temp == NULL)
        {
            cout << endl; // Changing the Level
            if (!q.empty())
            {
                // Queue still has some nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }

    // Recursive call LNR
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }

    // Recursive call NLR
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node *maxvalue(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL)
    {
        return root;
    }

    return maxvalue(root->right);
}

Node *deleteBST(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    // Value found(val)
    if (root->data == val)
    {
        // 0 Child
        if (root->right == NULL && root->left == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child left
        if (root->right == NULL && root->left != NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // 1 child right
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->right != NULL && root->left != NULL)
        {
            // max value lement in the left side
            int maxi = maxvalue(root->left)->data;
            root->data = maxi;
            root->left = deleteBST(root->left, maxi);
            return root;
        }
    }
    // Check where theNode lies
    else if (val < root->data)
    {
        root->left = deleteBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteBST(root->right, val);
    }
}

int main()
{
    Node *root = NULL;
    int val;
    // 10 8 21 7 27 5 4 3 -1
    cout << "Enter the Numbers you want to add in the Tree: " << endl;
    takeInput(root);

    cout << "Printing BST: " << endl;
    level(root);
    cout << endl;

    cout << "calculating maximum value: " << endl;
    cout << maxvalue(root)->data << endl;
    cout << "Enter the value you want to delete: " << endl;
    cin >> val;
    root = deleteBST(root, val);

    cout << "Printing Inorder: " << endl;
    inorder(root);
    cout << endl;
    cout << "Printing Preorder: " << endl;
    preorder(root);

    return 0;
}