#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
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
        st.push(qu.front());
        qu.pop();
    }
    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}