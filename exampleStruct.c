
#include <stdlib.h>
#include <stdio.h>

//make a safe integer array

struct SafeIntArray {
	int *arr;
	int len;

};

struct SafeIntArray CreateArray(int len) {
	struct SafeIntArray a;
	a.arr = (int *)malloc(len*sizeof(int));
	a.len = len;
	//when returning a, returns the array
	//then the stack gets popped and everything disappears
	//however, the contents is coppied into myArray
	return a;
}

int main() {
	struct SafeIntArray myArray;
	myArray = CreateArray(30);
	if (myArray.len >=30) {
		myArray.arr[30]=5;
	}
	printf("%d\n", myArray.arr[30]);
}