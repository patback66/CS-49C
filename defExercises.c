#include <stdio.h>
#define PI 3.14159
#define SQUARE(A) A * A

float calcarea(float r) {
	return PI * SQUARE(r);
}

int func(int m) {
	int i;
	i = SQUARE(4+m);
	return i;
}
//What does the compiler see?
/*
int func(int m) {
	int i;
	i = 4+m * 4+m;
}
*/
//solution
//#define SQUARE(A) (A) * (A)

int main() {
	printf("%d \n", calcarea(5));
	printf("%d \n", func(15));
	return 0;
}
