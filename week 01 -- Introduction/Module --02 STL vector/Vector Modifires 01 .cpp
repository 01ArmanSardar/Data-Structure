#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v={10,20,30,40,50};
    vector<int > x={50,40,30,20,10};
    v=x;
    for (int i=0;i<v.size();i++)
    {
        cout <<v[i]<< " ";
    }
}
