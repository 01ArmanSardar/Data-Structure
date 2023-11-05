#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    int x;
    cin >> x;
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parnt_idx = (cur_idx - 1) / 2;
        if (v[cur_idx] > v[parnt_idx])
            swap(v[cur_idx], v[parnt_idx]);
        else
            break;
        cur_idx = parnt_idx;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v,x);
    }
    for (int val  : v)
    {
        cout <<val<<" ";
    }

    return 0;
}