/*
* @author Matthew Koken
*/
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>


struct ListNode {
     int data;
     struct ListNode *next; // next is NULL if this ListNode is the last in the list

};
// AddToSortedList accepts a sorted list L as input, creates a new ListNode to contain
// the entry d, and inserts the ListNode into L in such a way as to maintain the sorted
// order of the list, from smallest to biggest. Return the new list. Do not create new
// ListNodes to replicate the existing entries of the input list L.
// 1 point
struct ListNode *AddToSortedList(struct ListNode *L, int d) {
    struct ListNode *tptr;
    tptr = (struct ListNode *)malloc(sizeof(struct ListNode));
	struct ListNode *pptr = 0;
	struct ListNode *nptr;
	for (tptr=L; (tptr!=0)&&(tptr->data<d); tptr=tptr->next) {
		pptr=tptr;
	}
	nptr=(struct ListNode *)malloc(sizeof(struct ListNode));
	nptr->data=d;
	pptr->next=tptr;
	if(pptr!=0) {
		pptr->next=nptr;
		return L;
	} else {
		return nptr;
	}
}
// RemoveSortedList accepts a sorted list L as input, and removes all occurrences of d
// from L. Return the new list. Maintain the sorted order of the list, from smallest to
// biggest. Do not create new ListNodes to replicate the existing entries of the input
// list L.
// 3 points
struct ListNode *RemoveFromSortedList(struct ListNode *L, int d) {
    for (;;) {
        if(L==0) {
            return L;
        }
        if (L->data != d) {
            break;
        } else {
            L=L->next;
        }
        for (; L->next !=0; ) {
            if (L->next->data==d) {
                L->next= L->next->next;
            } else {
                L=L->next;
            }
        }
    }
    return L;
}
// MergeSortedLists accepts a sorted list L1 and another sorted list L2 as input,
// and returns a sorted list that contains all the elements of L1 and L2.
// Do not create new ListNodes to replicate the existing entries of the input
// lists L1 and L2. All lists are sorted from smallest to biggest.
// 3 points
struct ListNode *MergeSortedLists(struct ListNode *L1, struct ListNode *L2) {
    struct ListNode *tptr;
    struct ListNode *pptr;
    for (;L1!=0 || L2 !=0; tptr = tptr->next) {
        pptr = tptr;
        if ((L1->data < L2->data) && (L1!=0)) {
            tptr->data = L1->data;
            L1 = L1->next;
        } else {
            tptr->data = L2->data;
            L2 = L2->next;
        }
    }
    tptr->next = 0;
    return tptr;
}
// Sort accepts an unsorted list L and returns a sorted list that containing all the
// elements of L, from smallest to biggest. Do not create new ListNodes to replicate
// the existing entries of the input list L.
// 3 points
struct ListNode *Sort(struct ListNode *L) {
    struct ListNode *nptr;
    for (; L!=0; L=L->next) {
        nptr=AddToSortedList(nptr, L->data);
        nptr = nptr->next;
    }
    nptr->next = 0;
    return nptr;
}

//functions for testing
struct ListNode *mkNode(int i) {
    struct ListNode *new =(struct ListNode*) malloc( sizeof(struct ListNode) ) ;
    new->data = i;
    new->next = NULL;
    return new;
}

void printList(struct ListNode *L) {
    printf("List: \n");
    struct ListNode *ptr = L;
    while(ptr!=NULL){
        printf("%d \n", ptr->data);
        ptr=ptr->next;
    }
}

int main() {
    struct ListNode *list;
    struct ListNode *test1 = mkNode(5);
    struct ListNode *test2 = mkNode(2);
    struct ListNode *test3 = mkNode(7);
    test3->next = 0;
    test2->next=test3;
    //list = MergeSortedLists(test1, test2);
    //printList(list);
    printList(test2);
    test2 = RemoveFromSortedList(test2, 2);
    printList(test2);
   // printList(list);
    //printList(list);
    test2 = AddToSortedList(test2, 10);
    //printList(test2);
    return 0;
}
