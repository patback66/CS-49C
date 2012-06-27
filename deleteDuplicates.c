#include <stdlib.h>
#include <stdio.h>

float *DeleteDuplicates(float *arr, int len, int *nlen){
	float *narr;
	int unique = 1;
	int j;
	// = (float *)malloc(?*sizeof(float));
	//need to find out number of unique numbers
	for(int i=0; i<len; i++) {
		if(arr[i]!=arr[i-1]) {
			unique++;
		}
	}
	narr = (float *)malloc(unique*sizeof(float));
	//fill elements of the neww array
	//every element of the old array
	//if unique, put into new array
	narr[0]=arr[0];
	j=1;
	for(i = 1; i < len; i++) {
		if(arr[i]!=arr[i-1]) {
			narr[j] = arr[i];
			j++;
		}
	}
	*nlen = unique;
	free(arr);
	//&narr would return the address of narr
	//narr is already a pointer, so returning narr would return the address
	return narr;
}

int main() {
	float *eptr;
	int nlen;
	eptr = new float[5];
	eptr[0] = 1.0;
	eptr[1] = 1.6;
	eptr[2] = 1.6;
	eptr[3] = 2.3;
	eptr[4] = 2.3;
	eptr = DeleteDuplicates(eptr, 5, &nlen);
}