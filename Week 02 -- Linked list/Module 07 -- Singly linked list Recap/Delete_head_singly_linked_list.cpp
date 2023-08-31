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
void Print_linked_list(Node *head) // time complexity O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int size(Node *head) // time complexity O(n)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_head(Node *& head)
{
    
    Node *deletenode = head;
   head =head->next;
    delete deletenode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos;
    cin >> pos;
    if(pos==0)
    {
        delete_head(head);
    }
    else if (pos >=size(head))
    {
cout << "invalid Index"<<endl;
    }
    Print_linked_list(head);
}