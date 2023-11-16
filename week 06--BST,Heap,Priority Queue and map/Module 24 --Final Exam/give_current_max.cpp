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
class cmp
{
    public:
    bool operator()(Student a,Student b)
    {   bool s;
        if(a.marks<b.marks) return true;
        else if(a.marks>b.marks) return false;
        else if(a.marks==b.marks)
        {
            if(a.roll>b.roll) s=true;
            else if(a.roll<b.roll) s=false ;
        }
     return s;
    }
};

int main()
{
    priority_queue<Student,vector<Student>,cmp>pq;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int marks,roll;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;cin>>q;
    while(q--)
    {
        int t;cin>>t;
        if(t==0)
        {
        string name;
        int marks,roll;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;


        }
        else if(t==1)
        {
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(t==2)
        {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
    }
    
    return 0;
}