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
int main()
{
 int val;
   list<int>MyList;
    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;
           
          MyList.push_back(val);
       
    }
    MyList.sort();
    MyList.unique();
    for (int val :MyList)
    {
        cout << val<< " ";
    }
}
