#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
   
    mp.insert({"shakib" ,20});
    mp.insert({"ashik",78});
    // mp.insert({"shamim" ,0});
    mp.insert({"akib",88});
    if (mp.count("shamim"))
   cout <<"Ase";
   else cout <<"no";
    //cout <<mp["akib"];( akhne akib jehetoh akta idex er moto tai amr akib use koreh tar value tah print korbho)
   /* for (auto it=mp.begin() ;it!=mp.end();it++) (normally map tah output korar jonno a scope tah)
    {
        cout <<it->first <<" "<<it->second<<endl;
    }*/

    
    return 0;
}