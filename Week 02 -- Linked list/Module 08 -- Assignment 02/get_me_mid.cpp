#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int v) // time complexity O(1)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {

        tmp = tmp->next;
        count++;
    }
    return count;
}
//
void midell_element_found(Node *head)
{
    Node *tmp = head;
    int pos = size(head) / 2;
    if (size (head) % 2== 0)
    {
        pos --;
    }
    for (int i = 1; i <= pos; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val;
    if (size(head) % 2==0)
    {
        tmp=tmp->next;
        cout << " "<< tmp->val;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) // time complexity O(n)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val); // time complexity O(1)
    }
   for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
                
            }
        }
    }
   midell_element_found(head); 
}