#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node *prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
Node *sortinsert(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        return(temp);
    }
    if(x<head->data)
    {
        temp->next=head;
        return(temp);
    }
    Node *curr = head;
    while(curr->next!=NULL&&curr->next->data<x)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    
    return(head);
}


int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	temp2->next=head;
	temp2->prev=temp1;
	temp1->prev=head;
	head->prev=temp2;
	printlist(head);
    head = sortinsert(head, 25);
    cout<<"\n";
    printlist(head);
	
} 
