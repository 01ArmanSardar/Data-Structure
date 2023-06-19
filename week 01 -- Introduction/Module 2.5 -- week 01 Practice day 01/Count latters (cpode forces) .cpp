#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000000];
    cin >>s;
   vector <int> cnt(26,0);
   for (int i=0;i<strlen(s);i++)
   {
       int val =s[i]-97;
       cnt [val]++;
   }
   for (int i=0;i<26;i++)
   {
       cout <<i+97<<"-"<<cnt[i];
   }
}
