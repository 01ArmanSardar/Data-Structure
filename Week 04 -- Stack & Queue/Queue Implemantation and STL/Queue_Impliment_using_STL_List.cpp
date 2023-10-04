#include <bits/stdc++.h>
using namespace std;
class MyQueue 
{
    public:
    list<int >l;
    void push (int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front ()
    {
       return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        l.empty();
    }
};
int main()
{
   MyQueue qu ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
    return 0;
}