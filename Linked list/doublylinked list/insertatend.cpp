#include<iostream>
using namespace std;


struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
Node *insertatend(Node *head,int data)
{
    Node *temp = new Node(data);
    Node *curr = head;
    if(head == NULL)
    {
        return temp;
    }
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;
    return(head);
}

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}



int main()
{
     Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printlist(head);
    head = insertatend(head,40);
    printlist(head);
}