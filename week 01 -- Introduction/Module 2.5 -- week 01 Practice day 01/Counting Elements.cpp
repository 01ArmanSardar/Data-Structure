#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n;
vector <int> ar(n);
    for (int i=0;i<n;i++)
    {
        cin >> ar[i];
        auto it =find (ar.begin,ar.end,ar[i]+1)
        if (it == ar.end) cnt ++;
    }
    cout << cnt ;
}
