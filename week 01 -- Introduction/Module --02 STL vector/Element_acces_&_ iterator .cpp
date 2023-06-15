#include <bits/stdc++.h>
using namespace std;
int main()
{
    //@ Element acces
   // vector <int > v={9,3,4,5,6,7,8};
    //*Acces in Front element *

  //cout << v[0]; Normally acces element
    //cout <<v.front(); Function use korhe element acces

    //*Acces in last element*

   // cout <<v.back (); Function use koreh element acces
   // cout << v[v.size()-1]; Normally  element acces

   // @ iterator
   vector <int > v={8,4,3,2,2,3,5,3};

   for (auto it =v.begin();it<v.end();it++)
   {
       cout << *it <<" ";
   }
}
