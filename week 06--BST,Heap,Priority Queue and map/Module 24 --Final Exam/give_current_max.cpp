#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int marks;
    int rool;
    student(string name, int marks, int rool)
    {
        this->name = name;
        this->marks = marks;
        this->rool = rool;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.rool > b.rool)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<student, vector<student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks, rool;
        cin >> name >> marks >> rool;
        student obj(name, marks, rool);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >>a;
        if (a==1)
        {
            cout <<pq.top().name<< " "<<pq.top().marks<<" "<<pq.top().rool<<endl;
        }
        else 
        pq.pop();
    }
    return 0;
}