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
void find_at_middel(Node *head)
{
    Node *tmp = head;
    int sized = size(head);
    int pos = sized / 2;
    if ( sized%2==0)
    {
        pos--;
    }
    for (int i = 1; i <= pos; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val<<" ";
    if (sized % 2 == 0)
    {
        tmp = tmp->next;
        cout << tmp->val;
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
    find_at_middel(head);
}