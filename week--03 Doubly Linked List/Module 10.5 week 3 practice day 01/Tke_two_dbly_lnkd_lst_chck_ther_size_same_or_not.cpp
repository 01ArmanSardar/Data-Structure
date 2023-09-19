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
bool checked_value_same_or_not(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    
    while (tmp != NULL)
    {
        if (tmp->val==tmp2->val)
        {
            tmp=tmp->next;
            tmp2=tmp2->next;
        }
        else  

           return false;
    }
    return true;
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }
     int size1 = size(head);
    int size2 = size(head2);

    if (size1 == size2)
    {
        if (checked_value_same_or_not(head,head2))
            cout << "YES";
        else
            cout << "no";
    }
    else
        cout << "NO";
 //   print_normal(head);
 //   print_normal(head2);
}