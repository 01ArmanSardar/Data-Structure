#include <bits/stdc++.h>
using namespace std;
fun (int *&p)
{
cout <<p<<endl;
}
int main()
{
    int val=89;
    int *ptr =&val;
    fun (ptr);
    cout <<ptr<<endl;
}
