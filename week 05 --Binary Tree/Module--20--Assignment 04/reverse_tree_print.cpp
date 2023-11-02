#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // queue tekeh bher koreh eneh khotay rakbho jmn 'f' er modde raklam
        Node *p = q.front();
        q.pop();
        // tarpor jabotyio kaj korbho
        int l, r;
        cin >> l >> r;
        Node *subleft;
        Node *subright;

        if (l == -1)
            subleft = NULL;
        else
            subleft = new Node(l);
        if (r == -1)
            subright = NULL;
        else
            subright = new Node(r);
        p->left = subleft;
        p->right = subright;
        // children gulo keh push korbho
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
vector<int> reverseLevelOrder(Node *root)
{
    // Write your code here.
    vector<int> v;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // bher koreh anah
        Node *pr = q.front();
        q.pop();
        // jabotiyo kaj korbho
        v.push_back(pr->val);

        // children gulah keh rakbho

        if (pr->right)
            q.push(pr->right);
        if (pr->left)
            q.push(pr->left);
    }
    reverse(v.begin(), v.end());
    return v;
}
int main ()
{
     Node *root = input_tree();
   vector<int> v= reverseLevelOrder(root);
   for(int val:v )
   {
    cout <<val<<" ";
   }

}