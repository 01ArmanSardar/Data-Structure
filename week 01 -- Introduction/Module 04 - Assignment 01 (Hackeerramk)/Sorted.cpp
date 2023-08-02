#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)

    {
        int n;
        cin >> n;
        int ar[n];
        for (int  i=0; i<n; i++)
        {
            cin >> ar [i];
        }
        int flag =1;
        for (int i=0; i<n-1; i++)
        {
            if (ar[i] > ar[i+1])
            {
                flag=0;
            }
        }
        if (flag==1) cout << "YES" <<endl;
        else cout <<"NO"<<endl;
    }

}
