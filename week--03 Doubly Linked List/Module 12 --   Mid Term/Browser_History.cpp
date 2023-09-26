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
       insert_at_tail (head, tail, str); // time complexity O(1)
    }
    print_normal(head);
   /* int Q;
   cin >> Q;
   while (Q--)
   {
    string visit,next,prev,browser ;
    cin >>visit>>next>>prev;
    if (visit == browser)
    {
        cin >>browser;
    }
   } */
}