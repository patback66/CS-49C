#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode *next;
};

//myList is the name of a variable
//it is of type ListNode *

//add a number to a list
//adding n to the beggining of the list is easiest
void AddToList2(struct ListNode **L, int n) {
	//**L is a pointer to a pointer
	struct ListNode *tptr;
	tptr = (struct ListNode *)malloc(sizeof(struct ListNode));
	tptr->data = n;
	//only changes local variable L
	tptr->next = L;
	L=tptr;
}

void AddToList(struct ListNode **L:, int n) {
	struct ListNode *tptr;
	tptr = (struct ListNode *)malloc(sizeof(struct ListNode));
	tptr->data = n;
	tptr->next = *L;
	//Choose one L &L *&L **L *L &L
	//Only one is correct
	*L = tptr;
	//Do not change L
	//L = &tptr; changes L not myList, which is what we want to do
	return L;
}


int main() {
	struct ListNode *myList = 0;
	AddToList2(&myList, 7);
	//or you can return and use assignment
	myList = AddToList(mylist, 8);
	//giving the address of myList
	//Which address are you giving?
	//Not the address that it contains, the address of myList
}

/*
* Stack
* 1000 myList = 0/3000
*
* Heap
* 3000 <noName> 
* passing 1000 into AddToList
*/