#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << s.length()<<endl;
        stack<char> st;
        st.push(s[0]);
        cout <<st.top()<<endl;
        for (int i=1;i<s.length();i++)