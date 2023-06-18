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
    i=0;
    j=n-1;
    while (i<j)
    {
        int tmp =ar[i];
        ar[i]=ar[j];
        ar[j]=tmp;
        i++;
        j--;
    }

    for (int i=0;i<n;i++)
    {
    cout << ar[i]<<" ";
    }
}
