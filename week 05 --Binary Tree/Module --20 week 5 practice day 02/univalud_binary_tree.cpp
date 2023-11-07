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
    void flag_val (TreeNode * root,bool &flag,int num)
    {
        if (root == NULL) return;
        if (root->val != num) flag=false;
        flag_val(root->left,flag,num);
        flag_val(root->right,flag,num);
    }
    bool isUnivalTree(TreeNode* root) 
    {
     int num=root->val;
     bool flag= true;
     flag_val(root,flag,num);
     return flag ;
       
    }
    
};