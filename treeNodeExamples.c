
#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
	int d;
	struct TreeNode *left;
	struct TreeNode *right;
};

/*
		10
		/ \
	   9   18
	  /\    \
      2 8	12

		9
*/

int Depth(struct TreeNode *t){
	//depth = 1 + max(dLeft, dRight)
	//base case
	int dL, dR
	if (t==0) {
		return 0;
	}
	//recursive case
	dL = Depth (t->Left);
	dR = Depth(t->right);
	if (dL>dR) {
		return 1+dL;
	} else {
		return 1+dR;
	}
}