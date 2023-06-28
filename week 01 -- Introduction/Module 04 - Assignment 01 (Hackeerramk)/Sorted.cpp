#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i;
    cin >>n>>q;
    int ar[n];
    for ( i=0;i<n;i++)
    {
        cin >> ar [i];
    }
    while (q--)
    {
        if (ar[i]<ar[i+1])
        {
            cout <<"YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
