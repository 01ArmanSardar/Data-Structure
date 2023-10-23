/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int Count_Leaf_Node(BinaryTreeNode<int> *root)
{
    if (root == NULL ) return 0;
    if (root->left==NULL && root ->right== NULL)
    {
        return 1;
    }
       int l =Count_Leaf_Node(root->left);
        int r=Count_Leaf_Node(root->right);
         return l+r;
    
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    return Count_Leaf_Node(root);
}