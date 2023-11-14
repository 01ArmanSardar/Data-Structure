#include <bits/stdc++.h>

using namespace std;
int main()
{
    // Write your code here
    int t;
    cin >> t;
    vector<int> v;
    vector<int> tmp;
    while (t--)
    {
        int n;
        cin >> n;
        int j;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sort(v.begin(), v.end(), greater<int>());
            if (v[i] != v[i + 1])
            {
                tmp[j] = v[i];
            }
            for (j=0;j<n;j++)
            {
                cout <<tmp[j]<<" " <<endl;
            }
        }
        
    }

    return 0;
}