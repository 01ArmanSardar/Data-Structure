#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v={79,22,89,28,89};
    replace (v.begin (),v.end(),89,100);//syntex replace (v.begin (),v.end(),value,replace vlaue);
    for (int digit:v)
    {
        cout << digit<< " ";
    }
}
