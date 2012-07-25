#include <stdlib.h>
#include <stdio.h>

struct ListNode {
	int data;
	struct ListNode *next;
}

struct ListNode *Merge(struct ListNode*L1, struct ListNode *L2) {
	//add last of L1 to point towards L2, then call sort
	//works but slow
	//n^2, n log n 
	struct ListNode *rL2;
	struct ListNode *rL;
	if (L1->data < L2->data) {
		rL2 = L1;
	} else {
		rL2 = L2;
	}
	while (L1!=0 && L2!=0) {
		if (L1-data<L2->data) {
			if (rL !-0) {
				rL->next = L1;
			}
			rL=L1;
			L1 = L1->next;
		} else {
			if (rL !=0) {
				rL->next = L2;
			}
			rL=L2;
			L2 = L2->next;
		}
	}
	if (L1==0) {
		rL->next = L2;
	} else {
		rL->next = L1;
	}
	return rL;
}

int main() {
	return 0;
}