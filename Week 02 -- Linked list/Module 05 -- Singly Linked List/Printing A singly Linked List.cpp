#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next ;

    Node (int val)
    {
        this -> val=val;
        this-> next =NULL;
    }
};
int main()
{
    Node *head =new Node (10);
    Node *a=new Node (20);
    Node *b=new Node (30);
    Node *c=new Node   (40);

    // Manully Link korlam
    head ->next =a;
    a->next=b;
    b->next=c;

    //singly Linked list tah print korlam
    Node *tmp=head; //head jeno chng nah hoi tai head ke aktah temporary variable rakha holo ,jateh koreh second time head keh proyjone use korah jai
    while(tmp != NULL)
    {
        cout << tmp->val<< endl;
        tmp = tmp -> next;
    }
}
