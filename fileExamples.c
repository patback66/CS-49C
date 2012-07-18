#include <stdlib.h>
#include <stdio.h>

int main () {
	FILE *fptr2;
	FILE *fptr;
	int arr[4] = {101,2,30,1540};
	fptr = fopen("text", "wb");
	//faster write, can't really read, smaller file size
	fwrite(arr, sizeof(int), 4, fptr);
	fclose(fptr);
	fptr2 = fopen("text.txt", "wt");
	fprintf(fptr2, "%d %d %d %d", arr[0], arr[2], arr[2], arr[3]);
	//slower write, can read, larger file size
	fclose(fptr2);
	return 0;
}
