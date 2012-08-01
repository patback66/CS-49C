#include <stdio.h>
#include <stdlib.h>

//create 2 rows of 10 vertices in varray
//make 18 triangles in tarray
struct vertex {
	float x, y;
};

struct triangle {
	struct vertex *v1;
	struct vertex *v2;
	struct vertex *v3;
};
void makeVertices() {
	for(int i = 0; i<10; i++) {
		varray[i].x=(float)i;
		varray[i].y=1;
	}
	for (i=0; i<10; i++) {
		varray[10+i].x=(float)i+0.5;
		varray[10+i].y=0.0;
	}
}

void makeTriangles() {
	int i;
	for(i = 0; i < 9; i++) {
		tarray[i].v1 = &(varray[i]);
		tarray[i].v2 = &(varray[i+1]);
		tarray[i].v3 = &(varray[i+10]);
	}
}
int main() {
	struct vertex varray[1000];
	struct triangle tarray[1000];
	makeVertices();
	//tarray[6].v2->x=7.9;
	//changes the triangle and other triangles pointing to the same thing


	return 0;
}