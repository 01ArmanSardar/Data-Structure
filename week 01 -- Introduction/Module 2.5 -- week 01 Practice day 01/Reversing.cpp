#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++)
    {
        cin>> ar[i];
    }
    for ( i=0;i<n;i++)
    {
        for ( j=n-1;j<=1;j--)
        {
            int temp =ar[i];
            ar[i]=ar[j];
           ar[j]=temp;
        }
        i++;
        j--;
    }     //   i++;
       // j--;

    for (int i=0;i<n;i++)
    {
    cout << ar[i]<<" ";
    }
}
