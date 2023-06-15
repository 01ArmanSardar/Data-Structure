#include <bits/stdc++.h>
using namespace std;
int main()
{
   /* vector <int > v;
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }
    for (int value :v)
    {
        cout << value4
        <<" ";
    } */
    int n;
    cin>> n;
    vector <int > v(n);
    for (int i=0;i<v.size();i++)
    {
        cin>> v[i];
    }
    for (int value:v )
    {
        cout << value <<" ";
    }
}
