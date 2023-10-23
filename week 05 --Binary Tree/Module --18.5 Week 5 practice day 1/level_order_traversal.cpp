#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
   // if (root == NULL) return;
    vector<int> v;
    if (root == NULL) return v;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty())
    {
        //queue tekeh bher koreh anah
        BinaryTreeNode<int> *p=q.front();
        q.pop();
        //jabotyio kaj korah
        v.push_back(p->val);
        //children guluh keh rakha
        if (p->left!= NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
       
    }
     return v;
}