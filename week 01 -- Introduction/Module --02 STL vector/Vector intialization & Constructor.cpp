#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector <int> v;   *type 01 Just aktah vector nibho jetar modhhe 0 element takbhe *
    // vector <int >v(6); *type 02 ,  a vector tah teh just arrray er size deoa takbhe *
//  vector <int >v(5,10); *type 03,a vector tah teh prtomhe array er size then proti tah index er jonno value deoa takbhe ,jah same hobhe shob index er jonno*
//vector <int>v2(6,5908); *type 04, protome v2 namer aktah vector a size &value rakbho then setah onno aktah vector jemon V teh copy korbho *
// vector <int >v(v2);   *type 04*
int ar[5]={9,8,7,7,5};
vector <int > v(ar,ar+5);
    for (int i=0; i<v.size(); i++ )
    {
        cout<< v[i]<<"  ";

    }
    cout << endl;
    cout <<v.size() <<endl;
}
