#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
/*
Recursion
We just need to traverse the tree and store the sum of all left child, while visiting.

Algorithm :
01 --First, make a recursive function say ‘leftSumHelper’ passing root and ‘isLeft’ as parameters. ‘isLeft’ is used to store and check if the node is a left node or not.
02 -- Declare a base condition to check if ‘root’ is NULL then return
03 --Store the count of the number of left nodes by making a recursive call to the function passing root and ‘isLeft’ = 1 and storing the sum of nodes on left in a variable say ‘L’.
04 --Store the count of the number of right nodes by making a recursive call to the function passing root and ‘isLeft’ = 0 and storing the sum of nodes on right in a variable say ‘R’.
05 --Now check if ‘isLeft’ is 0 or not
If ‘isLeft’ is not equal to zero then return (L + R + root’s data) to the function.
Else return ('L' +' R').
##  Time Complexity
O(N), where ‘N’ is the number of nodes in the given tree.

 

As, we are making recursive calls N number of times. Therefore, overall time complexity will be O(N).

## Space Complexity
O(1)

 

As we are using constant space. Therefore, space complexity will be O(1).
*/
long long leftSumHelper(BinaryTreeNode<int>* root, int isLeft){

	if(root == NULL)
	{
		return 0;
	}
	long long l = leftSumHelper(root->left, 1);
	long long r = leftSumHelper(root->right, 0);

	if(isLeft != 0)
	{
		return (l + r + long(root->data));
	}

	return (l + r);
}

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	return leftSumHelper(root,0);	

}