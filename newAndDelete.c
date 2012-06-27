#include <stdlib.h>
#include <stdio.h>

void func() {
	int * iptr;
	iptr = (int *)malloc(20*sizeof(int));
	free(iptr);
}

int main() {
	func();
}