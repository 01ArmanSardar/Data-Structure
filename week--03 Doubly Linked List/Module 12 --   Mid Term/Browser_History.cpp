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
    Node *newNode = new Node(str);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
            break;
        insert_at_tail(head, tail, str);
    }
    int q;
    string address;
    string browser;
    cin >> q;
    cin.ignore();
    Node *temp = head;
    Node *cur = head;
    while (q--)
    {
        cin >> address;
        if (address == "visit")
        {
            cin >> browser;
            bool flag = false;
            temp = head;
            while (temp != NULL)
            {
                if (temp->str == browser)
                {
                    cout << browser << endl;
                    cur = temp;
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            if (flag == false)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (address == "prev")
        {
            if (cur->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cur = cur->prev;
                cout << cur->str << endl;
            }
        }
        else if (address == "next")
        {
            if (cur->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cur = cur->next;
                cout << cur->str << endl;
            }
        }
    }
    return 0;
}