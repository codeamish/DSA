#include<bits/stdc++.h>
using namespace std;



struct Node {
    int key ;
    Node *right;
    Node *left;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};
int getsize(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return 1+getsize(root->left)+getsize(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    cout<<getsize(root);
}


//time complexity is bog O of n auxiliary space is big O of h (height) 