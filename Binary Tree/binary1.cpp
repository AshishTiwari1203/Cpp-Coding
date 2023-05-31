#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildtree(node *&root)
{
    int val;
    cout << "Enter the value: ";
    cin >> val;
    root = new node(val);

    // Base case
    if (val == -1)
    {
        return NULL;
    }

    // We will Go for the left side
    cout << "Left keliye Puchon for " << val << endl;
    root->left = buildtree(root->left);

    // We will go to the right side
    cout << "Abhi Right ke liye dekho for " << val << endl;
    root->right = buildtree(root->right);

    // Complete Tree costruct hone ke bad return the root
    return root;
}

void level(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front(); // Taking the front element
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
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// Input
// 8 3 1 -1

int main()
{
    node *root;
    int val;
    root = buildtree(root);
    cout << "Displaying the tree wih level" << endl;
    level(root);

    return 0;
}