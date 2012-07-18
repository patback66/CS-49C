// homework 4: Total 5 points (including 2 bonus points)

#include <stdio.h>

// left of binary tree contains numbers smaller than d
// right of binary tree contains numbers larger than d
// if subtree is 0, means the subtree is empty
struct TreeNode {
	int d;
	struct TreeNode *left;
	struct TreeNode *right;
};

// 1 point: Insert d into the given tree t, maintain binary order of tree
struct TreeNode *Insert(struct TreeNode *t, int d) {




}

// 1 point: Return 1 if d is found in the given tree t, return 0 otherwise
int Find(struct TreeNode *t, int d) {




}

// 2 points (bonus): Delete the node containing d if it is found in the given tree t, maintain binary order of tree
// node itself should be freed. nodes under deleted node should be inserted into tree
struct TreeNode *Delete(struct TreeNode *t, int d) {





}



// 1 point: print given tree from smallest element to largest element
void PrintSorted(struct TreeNode *t) {



}

// given a non-empty tree t, return the largest element in the tree
int FindLargest(struct TreeNode *t) {
	if (t->right==0) {
		return t->d;
	} else {
		return FindLargest(t->right);
	}
}

int main()
{
	// you may write code here to test your functions above
	struct TreeNode *binarytree = 0;

	binarytree = Insert(binarytree, 15);
	binarytree = Insert(binarytree, 9);
	binarytree = Insert(binarytree, 46);
	binarytree = Insert(binarytree, 21);
	binarytree = Insert(binarytree, 3);
	binarytree = Insert(binarytree, 7);
	binarytree = Insert(binarytree, 9);
	binarytree = Insert(binarytree, 2);

	PrintSorted(binarytree);

	binarytree = Delete(binarytree, 5);
	binarytree = Delete(binarytree, 2);
	binarytree = Delete(binarytree, 9);

	PrintSorted(binarytree);


 
	return 0;
}

