#include <bits/stdc++.h>

using namespace std;
int main()
{
    // Write your code here
    int t;
    cin >> t;
   // set <int> s;
    while (t--)
    {
        set <int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
             
            int x;
            cin >> x;
            s.insert(x);
           
        }
        vector <int> v{s.begin(),s.end()};
        reverse(v.begin(),v.end());
       for (int val :v)
        {
          cout << val<<" ";  
        }
        cout <<endl;
        
        
    }
    
    /*for (auto it =s.begin();it!=s.end();it++)
        {
            cout <<*it<<" "<<endl;
        }*/

    return 0;
}