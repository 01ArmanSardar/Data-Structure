#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i;
    cin >>q>>n;
    int ar[n];
    for ( i=0; i<n; i++)
    {
        cin >> ar [i];
    }
    int flag=true;
    while (q--)
        //    int flag=true;
    {
        /*  int ar[n];
          for ( i=0; i<n; i++)
          {
              cin >> ar [i];
          }*/

        if (ar[i+1])
        {
            flag=false;
        }

    }
    for (int i=q; i<0; i++)
    {
        if (flag=true )
            cout <<"Yes";
        else
            cout <<"No";
    }
}
