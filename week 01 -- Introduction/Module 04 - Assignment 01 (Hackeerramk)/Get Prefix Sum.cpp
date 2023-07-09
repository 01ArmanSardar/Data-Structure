#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector <int> ar(n);
    for (int i=0; i<ar.size(); i++)
    {
        cin>>ar[i];
    }
    vector <int> pre(n);
    pre[0]=ar[0];
    for (int i=1; i<pre.size(); i++)
    {
        pre[i]=ar[i]+pre[i-1];
      //  cout <<pre[i]<<" ";
 //   reverse(pre.begin(),pre.end());
   // cout <<pre[i]<<" ";


    }
    reverse(pre.begin(),pre.end());
    cout <<pre[i]<<" ";
}
