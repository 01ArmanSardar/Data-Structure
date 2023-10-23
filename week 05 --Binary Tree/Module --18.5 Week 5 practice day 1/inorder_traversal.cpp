/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector <int> v;
void InOrder(TreeNode *root)
{
    if (root==NULL)return ;
    InOrder(root->left);
    v.push_back(root->data);
    InOrder(root->right);
    //v.push_back(root->data);

}
vector<int> getInOrderTraversal(TreeNode *root)
{
 InOrder(root);
return v;   
}