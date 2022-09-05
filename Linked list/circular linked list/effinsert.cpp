#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node *insert(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next=temp;
        return(temp);
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return(head); 
    }
}
void printlist(Node *head){
    if(head==NULL)return;
    cout<<"\n"<<head->data;
    for(Node *p = head->next; p!=head; p=p->next)
    {
        cout<<"  "<<p->data;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(5);
	head->next->next=new Node(20);
	head->next->next->next=new Node(15);
	head->next->next->next->next=head;
	printlist(head);
	head = insert(head,1);
    cout<<"\n";
    printlist(head);
    return 0;
} 
