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
    Node head (10);
    Node sec (20);

    cout << head.val<<endl;
    cout <<sec.val<<endl;
}
