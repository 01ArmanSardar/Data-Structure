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
int     flag =false  ;
    for (int i=0; i<n; i++)
    {
        if (ar[i]==ar[i+1])
        {
            flag=true;
        }
    }
    if (flag =true )
    {
        cout <<"YES";
    }
    else
    {
        cout << "NO";
    }
}
/*
6
2 1 3 5 2 1
YES

5
1 2 3 4 5
NO
*/
