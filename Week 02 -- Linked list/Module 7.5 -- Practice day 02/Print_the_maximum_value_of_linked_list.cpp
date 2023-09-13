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
void Print_linked_list(Node *head) // time complexity O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int print_maximum_value(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if (max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
   cout << max;
   
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
   print_maximum_value(head);
    //Print_linked_list(head);

}