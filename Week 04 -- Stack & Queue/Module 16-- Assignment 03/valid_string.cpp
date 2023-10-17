#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        //stack<char> st;
       // st.push(s[0]);
        //for (int i=1;i<s.length();i++)
        for (char c:s)
        {

             //st.push(c);
            
            if ( !st.empty() && c == 'B' && st.top() == 'A'  )
            {
                st.pop();
            }
            else if ( !st.empty() && c == 'A' && st.top() == 'B')
            {
                st.pop();
            }
           else 
            {
                st.push(c);
            }
         }
        if (st.empty())
        {
            cout <<"YES"<<endl;
        }
       else 
        {
           cout <<"NO"<<endl;
        }
    }
    //if (st.empty()) cout <<"YES"<<endl;
   //else cout <<"NO"<<endl;

    return 0;
}
