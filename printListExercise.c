//Write a function to print all the elements of a list
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode *next;
};

void PrintList(struct ListNode *L1) {
	struct ListNode *lptr;
	lptr=L1;
	while(lptr!=0) {
		printf("%d\n", lptr->data);
		lptr = lptr->next;
	}
}

//with recursion
void printer(struct ListNode *L) {
	if(L==0) {
		break;
	} else {
		printf("%d", L->data);
	}
}

//Write a function to return the length of a List
int listLength (struct ListNode *L1) {
	int len = 0;
	struct ListNode *lptr;
	for(lptr=L1; lptr!=0; lptr->next) {
		len++;
	}
	return len;
}

int main() {
	struct ListNode *L1 = 0;
    struct ListNode *L2 = 0;

    L1 = (ListNode *)malloc(sizeof(struct ListNode));
    L1->data = 5;
    L1->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    L1->next->data = 10;
    L1->next->next = 0;
    PrintList(*L1);

	return 0;
}