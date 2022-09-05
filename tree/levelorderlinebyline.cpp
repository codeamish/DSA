// #include<bits/stdc++.h>
// using namespace std;


// struct Node
// {
//     int key;
//     Node *right,*left;
//     Node(int x)
//     {
//         key = x;
//         right = left = NULL;
//     }
// };

// void printLevelOrderLine(Node *root)
// {
//     if(root ==NULL)
//     {
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(q.size()>1)
//     {
//         Node *curr = q.front();
//         q.pop();
//         if(curr==NULL)
//         {
//             cout<<endl;
//             q.push(NULL);
//             continue;
//         }
//         cout<<curr->key<<" ";
//         if(curr->left!=NULL)
//         {
//             q.push(curr->left);
//         }
//         if(curr->right!=NULL)
//         {
//             q.push(curr->right);
//         }
//     }
// }

// int main() {
	
// 	Node *root=new Node(10);
// 	root->left=new Node(20);
// 	root->right=new Node(30);
// 	root->left->left=new Node(40);
// 	root->left->right=new Node(50);
// 	root->right->left=new Node(60);
// 	root->right->right=new Node(70);
	
// 	printLevelOrderLine(root);
// }

// time complexity is big O of n+h we can ignore h as n is bigger than n so time complexity is big O of n auxiliary space is theta w where w is width

// Method 2

#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void printLevel(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        }
        cout<<"\n";
    }
}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	printLevel(root);
}
//time complexity is bid O of n and auxilary space is theta w or big O of n


