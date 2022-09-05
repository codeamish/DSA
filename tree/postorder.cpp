#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node * left;
    Node *right;
    Node(int x)
    {
        left = right = NULL;
        key = x;
    }
};
void inorder(Node *root)
{   
    if(root!=NULL)
    {

        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<"  ";
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    inorder(root);
}

