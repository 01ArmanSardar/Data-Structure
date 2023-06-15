#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > v={10,20,38,49,59};
   // v.erase (v.begin()+2)//for delete single elemrnt
   v.erase (v.begin()+1,v.begin()+4);
    for (int digit : v)
    {
        cout << digit<< " ";
    }
}
