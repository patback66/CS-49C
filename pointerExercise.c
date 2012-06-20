#include <stdio.h>

int n = 20;
float f = 1.05;
float * fptr = &f;
int * iptr = 0;
int i;

int main() {
	iptr = &n;
	printf("addresses %d %d\n", (int) iptr, (int) fptr);
	printf("values %d %f\n", *iptr, *fptr);
	i = *iptr + 50;
	*iptr = 10;
	printf("values %d %d\n", n, i);
	printf("values of pointer %d %d", (int)&iptr, (int)&fptr);
	return 0;
}
