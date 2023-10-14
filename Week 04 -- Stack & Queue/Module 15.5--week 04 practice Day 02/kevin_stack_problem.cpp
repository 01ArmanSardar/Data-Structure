#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	for (int i=0;i<s.length();i++)
	{
      st.push(s[i]);
	}
	string nsrt="";
	while (!st.empty())
	{
		char x=st.top();
		nsrt.push_back(x);
		st.pop();
	}
	return nsrt;
}
