
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int key;
        map<int, int> mp;
        int ans;
            int max=INT_MIN;
        while (!mp.empty())
        {
             
            mp[key]++;
          if (mp[key]>max)
            {
                max=mp[key];
              ans =key;
            }
        }
        cout <<ans<<" "<<max<<endl;

        
    }

    return 0;
}