#include <stdio.h>


float average = 0;
int b[5] = {1,2,3,4,8};
int i;


int main()
{
	b[0]=80;
	b[1]=85;
	b[2]=100;
	b[3]=60;
	b[4]=80;
	//for(i=0,avg=0.0;i<5;i++)
	//multiple arguments, seperated by ,
	//multiple things to do at end of loop, seperated by ;
	for(i=0;i<5;i++)
	{
		average+=b[i];
	}
	printf("%f",average/5);
	return 0;
}