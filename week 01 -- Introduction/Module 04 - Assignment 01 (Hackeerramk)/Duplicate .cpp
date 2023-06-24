#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int ar[n];
//sort (ar,ar+n);
    for (int i=0; i<n; i++)
    {
        cin>> ar[i];
        //sort (ar,ar+n)
    }
    sort (ar,ar+n);
    // for (int i=0; i<n; i++)
    // {
    if (ar[i]==ar[i+1])
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    //}
}
