#include<bits/stdc++.h>
using namespace std;
class Student
{   public:
    string name;
    int marks;
    int roll;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;

    }

};
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        
        int x;
        cin>>x;
        
        pq.push(x);
    }
    int q;cin>>q;
    while(q--)
    {
        int t;cin>>t;
        if(t==0)
        {
         int x;
        cin>>x;
        pq.push(x);
        cout<<pq.top()<<endl;

        }
        else if(t==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
        else if(t==2)
        {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;
        }
    }
    
    return 0;
}