/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if (root == NULL) return false;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty())
    {
        //bher korh anah
        BinaryTreeNode<int>*p=q.front();
        q.pop();
       // jabotyo kaj korah
       if ( x == p->data) return true;
      else  if ( p->left != NULL &&x ==p->left->data )
       return true;
       else  if ( p->right != NULL &&x ==p->right->data )
       return true;
       //else if (x ==p->left->data && p->right->data) return true;
       //children gulah keh rekhe deoa
       if (p->left) q.push(p->left);
       if (p->right) q.push(p->right);

    }
    return false;
}