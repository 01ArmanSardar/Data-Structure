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
void insert_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
/*void Insert_at_any_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "invalid index" << endl
                 << endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}*/
void Insert_at_positon(Node *head, int pos, int v) // time complexity O(n);
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
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
void Print_linked_list(Node *head) // time complexity O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
    int Q;
    cin >> Q;
    while (Q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
           insert_head(head,val) ;
           Print_linked_list(head);
        }
        else if (pos >size(head))
        {
            cout <<"invalid Index";
        }
        else if (pos<size(head))
        {
            Insert_at_positon(head,pos,val);
            Print_linked_list(head);
        }
        else if (pos = size (head))
        {
            insert_tail(head,tail,val);
            Print_linked_list(head);
        }

    }
   // Print_linked_list(head);
}