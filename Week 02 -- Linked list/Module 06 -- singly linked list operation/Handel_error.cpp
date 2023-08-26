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
void insetrAtTail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void PrintLinkedList(Node *head)
{
    cout << "your linked list : " << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void Insert_at_any_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp==NULL)
        {
            cout << endl<< "invalid index"<<endl<<endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
Insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void delet_a_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp==NULL)
        {
            cout <<endl<< "invalid index"<<endl;
            return;
        }
    }
    if (tmp->next==NULL)
        {
            cout <<endl<< "invalid index"<<endl;
            return;
        }
    Node *assume = tmp->next;
    tmp->next = tmp->next->next;
    delete assume;
}
void Delet_head(Node *&head)
{
    if (head==NULL)
        {
            cout <<endl<< "Head is not avilaavle at the moment"<<endl;
            return;
        }
    Node *tmp = head;
    head = head->next;
    delete tmp;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 01 ;insert at tail" << endl; //Error handle Done
        cout << "Option 02 ;print the linkedlist" << endl;//No error in this iteam 
        cout << "option 03 ;insert at any positoion" << endl;//Errpr handel done 
        cout << "option 04 ;insert at head" << endl; //NO erroe in this iteam
        cout << "Option 05 ; delet a position" << endl;//Error handel done 
        cout << "Option 06 ; delet a head" << endl;//Error handel done 
        cout << "Option 07 ; terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "please inter value: ";
            int v;
            cin >> v;
            insetrAtTail(head, v);
        }
        else if (op == 2)
        {
            PrintLinkedList(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "input position" << endl;
            cin >> pos;
            cout << "input value" << endl;
            cin >> v;
            if (pos == 0)
            {
                Insert_at_head(head, v);
            }
            else
            {
                Insert_at_any_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "input a value ";
            cin >> v;
            Insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "enter positon : ";
            cin >> pos;
            if (pos == 0)
            {
                Delet_head(head);
            }
            else
            {
                delet_a_position(head, pos);
            }
        }
        else if (op == 6)
        {
            Delet_head(head);
        }

        else if (op == 7)
        {
            break;
        }
    }
}