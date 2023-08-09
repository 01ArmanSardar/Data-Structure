#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
   int m=(n/2)+1;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==j && i==m)
                cout<< "l";
else if (i==j)
    cout <<"x";
        else  if (j==(n+1-i))

                cout <<"y";
       //   else if   (i==j & i==m)
            //    cout <<"l";

            else
                cout <<" ";
        }
        cout <<endl;
    }
}
