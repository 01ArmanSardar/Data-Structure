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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
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
void print_reversly(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int Q;
    cin >> Q;
    while (Q--)
    {

        int x, val;
        cin >> x >> val;
        if (x == 0)
        {
            insert_at_head(head, tail, val);
            cout << head->val << " " << tail->val << endl;
             cout << tail->val << " " << head->val << endl;
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, val);
            cout << head->val << " " << tail->val << endl;
             cout << tail->val << " " << head->val << endl;
        }
        else cout <<"invalid index";
    }
}