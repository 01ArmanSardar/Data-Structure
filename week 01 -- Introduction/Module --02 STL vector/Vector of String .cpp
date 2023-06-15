#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //if string input with space

    /*int n;
    cin >> n;
    cin.ignore();
    vector <string> v(n);
    for (int i=0;i<n;i++)
    {
        getline (cin,v[i]);
    }
    for (string str:v)
    {
        cout << str<< endl;
    } */

    // if string input without space
    int n;
    cin >> n;
    vector <string > v(n);
    for (int i=0;i<n;i++)
    {
        cin >>v[i];
    }
    for (string str:v)
    {
        cout << str<< endl;
    }
}

