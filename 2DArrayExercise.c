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

int toughestHomework();
{
	int lowIndex = 0;
	int lowAverage = 100;
	int sum;
	int average;
	for (int indexHomework; indexHomework < 20; indexHomework++)
	{
		sum = 0;
		for(int studentIndex = 0; studentIndex < 100; studentIndex++)
		{
			sum+=hws[studentIndex][indexHomework];
		}
		average = sum/100;
		if(average < lowAverage)
		{
			lowAverage = average;
			lowIndex = indexHomework;
		}

	}
}

//teacher answer
int tough()
{
	int thwsofar=0;
	int softhwsofar = 100000000000000;
	for (j=0;j<20;j++)
	{
		sofhwj=0;
		for(i=0;i<100;i++)
		{
			sohwj=sofhwj+hws[i][j];
		}
		if(sofhwj<softhwsofar)
		{
			thwsofar=j;
			softhwsofar=sofhwj;
		}
	}
	return thwsofar;
}

int numhighest();
{
	int highGrade = 0;
	int count = 0;
	int numOccurrences
	for(int i=0; i<100; i++)
	{
		for (int j=0; j<20; j++)
		{
			if (hws[i][j] > highGrade)
			{
				highGrade = hws[i][j]j
			}
		}
	}
	for (i=0; i<100; i++)
	{
		for(j=0; j<80; j++)
		{
			if(hws[i][j]==highGrade)
			{
				numOccurrences++;
			}
		}
	}
}
/*
for(i=0; i<100; i++)
{
	for (j=0; j<20; j++)
	{
		if (hws[i][j]>highestScore)
		{
			highestScore = hws[i][j];
			numOccurrences=1;
		}
		else if(hws[i][j] == highestScore)
		{
			numOccurrences++;
		}
	}
}
*/