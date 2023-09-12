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

void print_reversly(Node * n)
{
    //basecase
    if (n==NULL)
    return;
print_reversly(n->next);
cout <<n->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)//time complexity O(n)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail,val);//time complexity O(1)
    }
    print_reversly(head);
    
}
/*int main()
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
    print_reversly(head);
    return 0;
}*/