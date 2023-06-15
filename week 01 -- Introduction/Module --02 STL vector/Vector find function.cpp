#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > v={8,3,2,4,2,2,2,5,4,2,7,8,9};
    auto it =find (v.begin (),v.end(),80);
    if (it == v.end())
    cout << "not found";
        else cout << "found";
}
