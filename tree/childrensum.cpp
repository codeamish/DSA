#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right,*left;  
    Node(int x)
    {
        key = x;
        right =  left = NULL;
    }
};
bool isCSum(Node *root)
{
    if(root==NULL) return true;
    else if(root->left==NULL&& root->right==NULL) return true;
    int sum = 0;
    if(root->left!=NULL) sum = sum + root->left->key;
    if(root->right!=NULL) sum = sum + root->right->key;
    return(root->key==sum && isCSum(root->right)&& isCSum(root->left));
}

int main() {
	
	Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(9);
	
	cout<<isCSum(root);
}