#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i=0;i<n;i++) // O(n) time complaxity
    {
    cin >> ar[i];
    }
    for ( int i=0;i<n;i++) // O(n) time complexity.
    {
        cout << ar[i]<<" ";
    }
}
