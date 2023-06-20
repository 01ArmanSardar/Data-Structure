#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
   vector <int> cnt(26,0);
while(cin >> ch )
    {
       int val =ch-97;
       cnt [val]++;
   }
   for (int i=0;i<26;i++)
   {
       if (cnt [i]!=0)
       {
           char ch1=i+97;
       cout <<ch1<<" : "<< cnt[i]<<endl;
       }
   }
}
