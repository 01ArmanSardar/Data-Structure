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
bool isPalindrome(Node *head)
{

    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_tail(newHead,newTail,tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    tmp = head;
    Node *tmp2 = newHead;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
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
        if (isPalindrome(head))
       cout << "yes";
       else cout <<"NO";
    }