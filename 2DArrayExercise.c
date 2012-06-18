#include <stdio.h>
#include <stdlib.h>

int hws[100][20];
int totals[100];

int topScore()
{
	/*
	int sum=0;
	int highScore=0;
	int currTop;
	for(int count = 0;count<100;count++)
	{
		for(int i = 0; i <20; i++)
		{

		}
	}
	int i,j,top;
	*/
for(i=0; i<100; i++)
{
	totals[i]=0;
}
for(i=0;i<100;i++)
{
	for(j=0; j<20; j++)
	{	
		totals[i]=totals[i]+hws[i][j];
	}
}
highScore = 0;
topStudent = 0;
for(i=0; i<100; i++)
{
	if(totals[i]>highScore)
	{
		topstudent = i;
	}
}
return topstudent;
}

