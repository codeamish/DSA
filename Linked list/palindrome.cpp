#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
bool isPalindrome(Node *head)
{
    Node *end = head;
    while(end->next != NULL)
    {
        end = end->next;
    }

}

int main() 
{ 
	Node *head=new Node('g');
	head->next=new Node('f');
	head->next->next=new Node('g');
	if(isPalindrome(head))
	    cout<<"Yes";
	else
	    cout<<"No";
	return 0;
} 


