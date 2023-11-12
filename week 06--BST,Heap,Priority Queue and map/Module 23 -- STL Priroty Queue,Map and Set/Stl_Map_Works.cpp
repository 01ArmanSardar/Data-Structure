#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
   
    mp.insert({"shakib" ,20});
    mp.insert({"ashik",78});
     mp.insert({"shamim" ,90});
    mp.insert({"akib",88});
    for (auto it=mp.begin() ;it!=mp.end();it++)
    {
        cout <<it->first <<" "<<it->second<<endl;
    }

    
    return 0;
}