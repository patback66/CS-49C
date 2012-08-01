#include <stdio.h>
#include <stdlib.h>

struct coord {
	float x, y, z;
};

int main() {
	struct coord *cparray1[5];
	struct coord *cparray2[5];
	cparray1[3]=(struct coord *)malloc(sizeof(struct coord));
	cparray1[3]->y=2;
	cparray2[2]=cparray1[3];
	cparray2[2]->y=7;
	printf("%f ", cparray1[3]->y);
	return 0;
	//should print 7 or 2
	//prints 7
	//Componentwise copy
}
