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
    int flag = 1;
for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
            {
           flag =0;
            }
        }
    }
    if (flag ==1) cout << "NO";
    else if (flag == 0 ) cout <<"yes";

}