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
bool check_samevalue_or_not(Node *head, Node *head2)
{
    while (head != NULL && head2 != NULL)
    {
        if (head->val != head2->val)
            return false;
        head = head->next;
        head2 = head2->next;
    }
    return (head == NULL && head2 == NULL);
   
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while (true) // time complexity O(n)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val); // time complexity O(1)
    }
    while (true) // time complexity O(n)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val); // time complexity O(1)
    }
    int size1 = size(head);
    int size2 = size(head2);

    if (size1 == size2)
    {
        if (check_samevalue_or_not(head, head2))
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
}