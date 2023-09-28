#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string str;
    Node *next;
    Node *prev;
    Node(string str)
    {
        this->str = str;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string str)
{
    Node *newnode = new Node(str);
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
        cout << tmp->str << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string str;
    while (true) // time complexity O(n)
    {
        cin >> str;
        if (str == "end")
            break;
        insert_at_tail(head, tail, str); // time complexity O(1)
    }
    int Q;
    cin >> Q;
    string browser;
    string address;
    Node *tmp = head;
    Node *cur = head;
    while (Q--)
    {
        cin >> browser;
        if (browser == "visit")
        {
            cin >> address;
            while (tmp->next != NULL)
            {
                if (tmp->str == address)
                {
                    // cur->str = address;
                    cout << address << endl;
                    cur->str = address;
                    break;
                }
                 cur = cur->next;
                tmp = tmp->next; 
            }
            /* cur = cur->next;
            tmp = tmp->next; */
            if (tmp->next == NULL && tmp->str == browser)
            {
                cout << address << endl;
            }
            if (tmp->next == NULL && tmp->str != address)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (browser == "prev")
        {

            if (cur->prev != NULL)
            {
                cur = cur->prev;
                cout << cur->str << endl;
                continue;
            }
            cout << "Not Available" << endl;
        }
        else if (browser == "next")
        {

            if (cur->next != NULL)
            {
                cur = cur->next;
                cout << cur->str << endl;
                continue;
            }
            cout << "Not avilable" << endl;
        }
    }
}