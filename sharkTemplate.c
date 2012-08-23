#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Fish {
	int pos[3];
	int age;
	int timeLastAte;
};


struct FishListNode {
	struct Fish *fptr;
	struct FishListNode *next;
};

struct FishListNode *ListOfSharks = NULL;
struct FishListNode *ListOfSmallFish = NULL;


// add fptr to the list L
struct FishListNode *AddFishToList(struct Fish *fptr, struct FishListNode *L) {
	// ***** WRITE CODE HERE ******
	struct FLN *nfn = (struct FishListNode*)malloc(sizeof(struct FishListNode));
	nfn->next = L;
	nfn->fptr=fptr;
	return nfn;
}


//128 by 128 by 128
void MoveToAdjacent(struct Fish *f) {
	int dim;
	dim = rand() % 3;
	if(dim == 0) {
		//should check conditions
		if(rand % 2 = 0) {
			f->pos[o] = f->pos[0] + 1;
		} else {
			f->pos[0] = f->pos[0] - 1;
		}
	}
}

// t is the timestep
void Simulate(int t) {


	// move each fish to a random neighboring position
	// ***** WRITE CODE HERE ******
	struct FishListNode *lptr;
	for(lptr = LOS; lptr!=NULL; lptr=lptr->next) {
		MoveToAdjacent(lptr->fptr);
	}


	// for each position that has a shark, delete all the fish in the same position,
	// if there is any fish, set timeLastAte variable of shark
	strut FishListNode *pptr;
	struct FishListNode *lptr2;
	for(lptr=ListOfSmallFish, pptr = NULL; lptr!=NULL; pptr=lptr, lptr=lptr->next) {
		for(lptr2 = ListOfSharks; lptr2!=NULL; lptr2=lptr2->next) {
			if(lptr->fptr->pos[0]==lptr2->fptr->pos[0] //&& ... check y & x pos)
			if(pptr!=NULL) {
				pptr->next = lptr->next;
			} else {
				LOF = lptr->next;
			}
			free(lptr->fptr);
			free(lptr);

		}
	}

	// if there are more than 10 small fish in the same position, it is overcrowded
	// delete all the small fish in that position with a probability of 0.5

	// delete all the fish whose age is more than 100 (extra credit)

	// delete all the sharks who have not eaten for 10 timesteps (extra credit)

	// ***** WRITE CODE HERE ******


	// for each fish age greater than 20, create one new fish in the same position

	// create new shark for all shark whose age is more than 20 with probability 0.2 (extra credit)
	
	// ***** WRITE CODE HERE ******

}


int main(int argc, char *argv[]) {
	int s;
	int b;
	int i;
	sscanf(argv[1], "%d", &s);
	sscangf(argv[2], "%d", &b)

	// the executable is called sea
	// this program is to be called with the command "sea s b"
	// where s and b are integers
	// s is the number of sharks to generate, b is the number of small fish
	// write code here to generate s sharks and b baits in random positions in the sea
	// the sea is 128*128*128

	// ***** WRITE CODE HERE ******
	for(i = 0; i<s; i++) {
		fptr =(struct Fish*)malloc(sizeof(struct Fish));
		fptr->pos[0] = rand() % 128;
		fptr->pos[1] = rand() % 128;
		fptr->pos[2] = rand() % 128;
		ListOfSharks = AddFishToList(fptr, ListofSharks);
	}
	//repeat for fish with b



	// simulate the sea 100 iterations
	for (i=0;i<100;i++) Simulate(i);


	return 0;
}

