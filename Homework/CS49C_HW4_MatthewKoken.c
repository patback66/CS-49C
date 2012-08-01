/*
*@author Matthew Koken
*/
// homework 4: Total 5 points (including 2 bonus points)

#include <stdio.h>
#include <stdlib.h>

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
	//printf("Inserting \n");
	if (t == 0) {
        t = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        t->d = d;
        t->left = t->right = 0;
	} else if (t->d == d) {
        return t;
	} else if (t->d > d) {
        t->left = Insert(t->left, d);
        //Insert(t->left, d);
	} else {
        t->right = Insert(t->right, d);
        //Insert(t->right, d);
	}
    return t;
}

// 1 point: Return 1 if d is found in the given tree t, return 0 otherwise
int Find(struct TreeNode *t, int d) {
    if (t == 0) {
        return 0;
    } else if ( t->d == d) {
        return 1;
    } else if (t->d > d) {
        return Find(t->left, d);
    } else {
        return Find (t->right, d);
    }
}

// 2 points (bonus): Delete the node containing d if it is found in the given tree t, maintain binary order of tree
// node itself should be freed. nodes under deleted node should be inserted into tree
struct TreeNode *Delete(struct TreeNode *t, int d) {
return t;
}
// 1 point: print given tree from smallest element to largest element
void PrintSorted(struct TreeNode *t) {
    if (t == 0) {
        //printf("%d \n", t->d);
        return;
    }
    printf("Printing \n");
    PrintSorted(t->left);
    printf("%d \n", t->d);
    PrintSorted(t->right);
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
/*
	binarytree = Delete(binarytree, 5);
	binarytree = Delete(binarytree, 2);
	binarytree = Delete(binarytree, 9);

	PrintSorted(binarytree);

*/

	return 0;
}

