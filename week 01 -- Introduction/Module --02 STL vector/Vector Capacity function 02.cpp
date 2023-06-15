#include <bits/stdc++.h>
using namespace std;
int main()
{
   // vector <int > v; Built in Function 01(find maximunm size of this array).
   // cout << v.max_size()<<endl;
  /* vector <int > v;  Built Function 02 (Capacity varanor function ,at 1st capacity hobhe 0 trpr jkhn v.push_back die value insert krbho tkn automaticaly size bereh giee 1 hobhr erpr abr jkhn push_back function die notun value insert krbho tkhn abr size hibhe 2 ,trpr jkhn abr push_back krbho tkhn size hbhe 4 ,karon capacity direh direh double hobhe,4 tah element jkhn over hoie jabhe tkhn capacity hbhe 8 ,trpr 16 ,trpr 32 ,avbhe array er size cpacity puron hoie geleh double hothe takbhe   )
cout <<   v.capacity ()<<endl;
v.push_back (89);
cout << v.capacity()<<endl;
v.push_back (989);
cout << v.capacity()<<endl;
v.push_back (999);
cout << v.capacity()<<endl;
v.push_back (989);
cout << v.capacity()<<endl;
v.push_back (9089);
cout << v.capacity()<<endl;
v.push_back (9);
cout << v.capacity()<<endl;
v.push_back (890);
cout << v.capacity()<<endl;
v.push_back (909);
cout << v.capacity()<<endl;  */


vector <int > v;
v.push_back(78);
v.push_back(98);
v.push_back(74);
v.push_back(38);
v.push_back(28);
v.push_back(48);
v.resize (7,8999);
cout <<v.size()<<endl;

for (int i=0;i<v.size() ;i++)
{
    cout <<v[i]<<endl;
}


}
