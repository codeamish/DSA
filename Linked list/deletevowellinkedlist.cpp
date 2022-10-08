#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    char x;
    Node *link;
};
Node *head = NULL;
void insert(char x)
{
    Node *temp;
    Node *newNode = new Node;
    newNode->x = x;
    newNode->link = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}
void delete_()
{
    Node *ptr;
    Node *prev;
    int count = 0;
    if (head == NULL)
    {
        exit(0);
    }
    while ((head->x == 'a') ||
           (head->x == 'e') ||
           (head->x == 'i') ||
           (head->x == 'o') ||
           (head->x == 'u'))
    {
        head = head->link;
        count++;
        if (head == NULL)
        {
            exit(0);
            cout << "No odd number present";
        }
    }
    ptr = head;
    prev = head;
    while (ptr != NULL)
    {
        if ((ptr->x == 'a') ||
            (ptr->x == 'e') ||
            (ptr->x == 'i') ||
            (ptr->x == 'o') ||
            (ptr->x == 'u'))
        {
            prev->link = ptr->link;
            count++;
            ptr = ptr->link;
        }
        else
        {
            prev = ptr;
            ptr = ptr->link;
        }
    }
    if ((prev->x == 'a') ||
        (prev->x == 'e') ||
        (prev->x == 'i') ||
        (prev->x == 'o') ||
        (prev->x == 'u'))
    {
        prev->link = NULL;
    }
    if (count == 0)
    {
        cout << "No vowel in linked list";
        exit(0);
    }
}
void printlist()
{
    Node* temp = head;
    if (!temp)
    {
        cout << "Empty List\n";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->x << "";
        if (temp->link)
            cout << "-->";
        temp = temp->link;
    }
    cout << endl;
}
int main()
{
    char x;
    while (cin >> x)
    {
        insert(x);
    }
    delete_();
    printlist();
    return 0;
}