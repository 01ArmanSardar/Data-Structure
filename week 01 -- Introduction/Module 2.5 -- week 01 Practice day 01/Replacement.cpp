#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>> n;
    int ar[n];
    for ( i=0; i<n; i++)
    {
        cin >> ar[i];
        if (ar[i]>0)
        {
            cout << "1"<<" ";
        }
        else if (ar[i]<0)
        {
            cout <<"2"<<" ";
        }
        else
        {
            cout <<"0"<<" ";
        }

    }
    /*if (ar[i]>0)
    {
        cout << "1"<<" ";
    }
    else if (ar[i]<0)
    {
        cout <<"2"<<" ";
    }
    else
    {
        cout <<"0"<<" ";
    }*/
}
