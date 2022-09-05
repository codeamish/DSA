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
    Node *curr= head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
Node *sortedmerge(Node *a, Node *b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    Node *head = NULL,*tail = NULL;
    if(a->data<=b->data)
    {
        head = tail = a;
        a = a->next;
    }
    if(b->data<=a->data)
    {
        head = tail = b;
        b = b->next;
    }
    while(a!=NULL&&b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a==NULL) tail->next = b;
    else tail->next = a;
    return(head);
}

int main()
{
    Node *a = new Node(10);
    a->next = new Node(20);
    a->next->next = new Node(30);
    Node *b = new Node(5);
    b->next = new Node(35);
    printlist(sortedmerge(a,b));
}
// time complexity is big O of m+n and space complexity is theta 1