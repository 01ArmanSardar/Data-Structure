#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector <int> v1(n);
    for (int i=0; i<v1.size(); i++)
    {
        cin >>v1[i];
    }
    vector <int> v2(n);
    for (int i=0; i<v2.size(); i++)
    {
        cin >>v2[i];
    }
    vector <int> ans(v2);
    ans.insert(ans.begin()+*(ans.end()-1),v1.begin(),v2.end());
    for (int value :ans)
    {
        cout << value;
    }
}
