#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)//O(N) time complextey
    {
        int x=i;
        while (x>0) // O(logn ) time complexity
            //7 & 10 number line jkhn ghun koreh n*logn ,tokohoni atah hoi O(Nlog(n)) time complexity
        {
            int digit =x%10;
            cout << digit <<" ";
            x/=10;
        }
        cout <<endl;
    }
}
