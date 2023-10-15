#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmnd;
        cin >> cmnd;
        string name;
        queue<string> qu;
        if (cmnd = 0)
        {
            qu.push(name);
        }
        else if (cmnd=1)
        {
            cout <<qu.front();
            qu.pop();

        }
    }

    return 0;
}