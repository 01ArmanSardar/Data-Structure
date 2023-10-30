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
    int tilt=0;
    int findTilt(TreeNode* root) {
        fun(root);
        return tilt;
    }
    int fun(TreeNode* root){
        if(root==NULL)
            return 0;
        
        int left=fun(root->left); // sum of left subtree
        int right=fun(root->right); // sum of right subtree
        
        tilt=tilt+abs(left-right); // add tilt
        return root->val+left+right; // return sum
    }
};