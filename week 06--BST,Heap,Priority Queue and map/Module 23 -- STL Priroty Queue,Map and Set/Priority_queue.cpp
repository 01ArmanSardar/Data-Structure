#include <bits/stdc++.h>
using namespace std;
int main()
{
  priority_queue<int> pq;//this priority queue is use for max heap
 //   priority_queue<int,vector<int>,greater<int>> pq; (this priority queue is use for min heap)
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN) time complexity;
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN) time complexity;
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1) time complexity;
        }
        else
            break;
    }

    return 0;
}