#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

   mp["shakib"]=90;
   mp["hasib"]=80;
   mp["rakib"]=90;
   mp["rahi"]=78;
    if (mp.count("shamim")) //(kono index bah tar value ache kinah tah count korah hocche,takleh ase print korbho ar nah takleh no print korbho )
        cout << "Ase";
    else
        cout << "no";
    // cout <<mp["akib"];( akhne akib jehetoh akta idex er moto tai amr akib use koreh tar value tah print korbho)
    /* for (auto it=mp.begin() ;it!=mp.end();it++) (normally map tah output korar jonno a scope tah)
     {
         cout <<it->first <<" "<<it->second<<endl;
     }*/

    return 0;
}