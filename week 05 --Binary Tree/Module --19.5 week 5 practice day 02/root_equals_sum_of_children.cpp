/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool checkTree(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            //bher koreh anah
            TreeNode* pr =q.front();
            q.pop();

            //jabotyio kaj korah
             int sum =pr->left->val+pr->right->val;
             if (sum==pr->val)
             return true;
             else return false;
            //children gulah push korah
            if (pr->left) q.push(pr->left);
            if (pr->right) q.push(pr->right);
        }
        return false;
    }
};