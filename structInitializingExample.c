//Exercise 1
//make pos of s2 point to itself
//Exercise 2
//print id of the student of c1 (sptr)
#include <stdio.h>

struct student;

struct coord {
	float x, y, z;
	struct student *sptr;
};

struct student {
	int id;
	struct coord pos;
};

int main() {
	struct student s1 = { 3 , { 1.0, 0.0, 0.5, 0 } } ;
	struct coord c1 = { 3.3, 1.3, 2.2 , 0 };
	//Exercise 1
	s1.pos.sptr = &s1;
	//Exercise 2
	printf("%d\n", c1.sptr->id);
	printf("%d\n", (*(c1.sptr)).id);
	printf("s1 is %d %f %f %f\n", s1.id, s1.pos.x, s1.pos.y, s1.pos.z);
	printf("c1 is %f %f %f\n", c1.x, c1.y, c1.z);
	return 0;
}
