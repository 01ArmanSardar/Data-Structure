#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node (int val)
    {
        this ->val=val;
        this->next=NULL;
    }
};
int main()
{
    Node * head= new Node  (10);
    Node *sec =new Node  (20);

    cout << head->val<<endl;
    cout <<sec->val<<endl;
    cout << head->next->val<<endl;
}
