
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
         string ans;
            int max=INT_MIN;
        while (ss >> word)
        {
             
            mp[word]++;
          if (mp[word]>max)
            {
                max=mp[word];
              ans =word;
            }
        }
        cout <<ans<<" "<<max<<endl;

        
    }

    return 0;
}