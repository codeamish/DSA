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

// Node *del(Node *head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     if(head->next==NULL)
//     {
//         delete head;
//         return(NULL);
//     }
//     Node *curr = head;
//     while(curr->next!=head)
//     {
//         curr = curr->next;
//     }
//     curr->next = head->next;
//     delete head;
//     return(curr->next);
// }
//Efficient solution
Node *del(Node *head)
{
    if(head==NULL) return(NULL);
    if(head->next==NULL)
    {
        delete head;
        return(NULL);
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = temp->next;
    delete temp;
    return(head);
    
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
	head = del(head);
    cout<<"\n";
    printlist(head);
    return 0;
} 







