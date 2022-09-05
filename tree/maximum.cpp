#include<bits/stdc++.h>
using namespace std;




struct Node
{
    int key;
    Node *right ,*left;
    Node(int x)
    {
        key = x;
        right = left = NULL;
    }
};
int get_max(Node *root) 
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->key,max(get_max(root->right),get_max(root->left)));
    }
}
int main()
{   
    Node *root = new Node(20);
    root->left  = new Node(80);
    root->right  = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout<<get_max(root);

}

// Time complexity is theta n and auxiliary space is theta h where h is heighy of the binary tree

