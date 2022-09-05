#include<bits/stdc++.h>
using namespace std;

// Naive solution

struct Node
{
    int key;
    Node *right,*left;
    Node(int x)
    {
        key = x;
        right = left= NULL;
    }
};

// int height(Node *root)
// {
//     if(root==NULL) return 0;
//     else
//     return max(height(root->left), height(root->right))+1;
// }

// bool isBalanced(Node *root)
// {
//     if(root==NULL) return true;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return(abs(lh - rh)<=1&&isBalanced(root->left)&&isBalanced(root->right));
// }
// int main() {
	
// 	Node *root=new Node(10);
// 	root->left=new Node(5);
// 	root->right=new Node(30);
// 	root->right->left=new Node(15);
// 	root->right->right=new Node(20);
	
// 	cout<<isBalanced(root);
// }

bool  isBalanced(Node *root) 
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = isBalanced(root->left);
    if(lh==-1)
    {
        return(-1);
    }
    int rh = isBalanced(root->right);
    if(rh==-1)
    {
        return -1;
    }
    if(abs(lh-rh)>1)
    return -1;
    else
    return max(lh,rh)+1;
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
	
	if(isBalanced(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
}
