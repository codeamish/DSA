 
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
    Node(int x)
    {
        data=  x;
        prev  =NULL;
        next = NULL;
    }
};
 

void reverse(struct Node** head_ref)
{
    struct Node* temp = NULL;
    struct Node* current = *head_ref;
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    if (temp != NULL)
        *head_ref = temp->prev;
}
void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
 
  
    new_node->data = new_data;
    new_node->prev = NULL;
 
    
    new_node->next = (*head_ref);
 
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
 
     (*head_ref) = new_node;
}
 
void printList(struct Node* node)
{
    while (node != NULL) {
        cout<<node->data<<" ";
        node = node->next;
    }
}
 

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
            int n;
            cin>>n;
            int a;
            cin>>a;
    struct Node* head = new Node(a);
    for(int i=0;i<n-1   ; i++)
    {
        int b;
        cin>>b;
        push(&head,b);
    }
    printList(head);
 
    getchar();
    }
}
