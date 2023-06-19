#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s="huifiwdfsdnfuwaaaabbc";
   vector <int> cnt ={0};
   for (int i=0;i<strlen(s);i++)
   {
       int val =s[i]-'a';
       cnt [val]++;
   }
   for (int i=0;i<26;i++)
   {
       cout <<i+'a'<<"-"<<cnt[i];
   }
}
