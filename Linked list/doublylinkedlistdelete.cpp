#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int x;
    Node *prev = NULL;
    Node *next = NULL;
    Node(int data, Node *prev = NULL, Node *next = NULL)
    {
        x = data;
        this->next = next;
        this->prev = prev;
    }
};

class DoublyLinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void pushFront(int x)
    {
        head = new Node(x, NULL, head);
        if (tail == nullptr)
            tail = head;
    }

    void pushBack(int x)
    {
        if (head == nullptr)
        {
            head = new Node(x);
            tail = head;
            return;
        }
        tail->next = new Node(x, tail, NULL);
        tail = tail->next;
    }
    bool c_ele(int data)
    {
        int c = 0;
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->x == data)
            {
                c++;
            }
            ptr = ptr->next;
        }
        if (c < 2)
            return false;
        else
            return true;
    }
    void delete_(int data)
    {
        Node *ptr = tail;
        int c = 0;
        while (ptr != NULL)
        {
            if (ptr->x == data)
            {
                if (c == 0)
                {
                    c++;
                    ptr = ptr->prev;
                    continue;
                }
                if (ptr == head)
                {
                    head = head->next;
                    head->prev = NULL;
                }
                ptr->prev->next = ptr->next;
                ptr->next->prev = ptr->prev;
            }
            ptr = ptr->prev;
        }
    }
    void printlist()
    {
        Node *ptr = tail;
        while (ptr != NULL)
        {
            cout << ptr->x << endl;
            ptr = ptr->prev;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    if (!(n > 2 && n <= 20))
    {
        cout << "Invalid list size";
        return 0;
    }
    DoublyLinkedList li;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        li.pushBack(elem);
    }
    int data;
    cin >> data;
    if (!li.c_ele(data))
    {
        cout << "Deletion not possible";
    }
    else
    {
        li.delete_(data);
        li.printlist();
    }
    return 0;
}