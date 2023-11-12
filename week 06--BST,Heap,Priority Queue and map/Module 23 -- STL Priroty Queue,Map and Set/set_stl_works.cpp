#include <bits/stdc++.h>
using namespace std;
int main()
{
    //set die BST er 3 tah operation korah ja holo Sorting,Duplicate,Searching
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);//O(logN)
    }
    if (s.count (9)) cout <<"yes";
    else cout <<"NO";
   /* for (auto it =s.begin();it!=s.end();it++)
    {
        cout <<*it<<endl;
    }*/
    return 0;
}