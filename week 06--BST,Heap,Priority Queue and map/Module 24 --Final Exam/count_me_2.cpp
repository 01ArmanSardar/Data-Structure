
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        map<int, int> mp;
        int ans;
        int max = INT_MIN;
        while (!mp.empty())
        {
            int x;
            mp[x]++;
            if (mp[x] > max)
            {
                max = mp[x];
                ans = x;
            }
            if (x == mp[x])
            {
                ans = max(ans, x);
            }
        }
        cout << ans << " " << max << endl;
    }

    return 0;
}