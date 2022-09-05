#include<bits/stdc++.h>
using namespace std;




struct Node
{
    int key;
    Node *right, *left;
    Node(int x)
    {
        key = x;
        right = left = NULL;
    }
};
void iterativeinorder(Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    
    while(curr!=NULL||s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr =  curr->right;
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right =  new Node(50);
    root->right = new Node(30);
    iterativeinorder(root);
}
//time complexity is theta n and space complexity or auxiliary space is theta h  where h is height  of the binary tree