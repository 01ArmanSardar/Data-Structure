#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reversly(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_positon(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
void insert_at_head(Node *&head,Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head ==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int main()
{
    Node * head=NULL;
    Node *tail=NULL;
   /*  Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(50);
    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;  */
    int pos, val;
    cin >> pos >> val;
     if (pos == 0)
    {
        insert_at_head(head,tail,val);
    }
   else if (pos >= size(head))
    {
        cout << "invalid index" << endl;
    }
   /*  else if (pos == 0)
    {
        insert_at_head(head,tail,val);
    } */
    else
    {
        insert_at_positon(head, pos, val);
    }
    print_normal(head);
    print_reversly(tail);
}
