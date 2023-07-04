#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector <int> ar(n);
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    vector <int> pre(n);
    pre[0]=ar[0];
    for (int i=0; i<n; i++)
    {
        pre[i]=ar[i]+pre[i-1];
        cout <<pre[i]<<" ";

    }
 //   cout <<pre[i];
}
