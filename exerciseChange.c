#include <stdlib.h>
#include <stdio.h>

void CalculateChange(int m)
{
	int arr[];
	int count = 0;
	while (m >= 25)
	{
		m-=25;
		arr[count]=25;
		count++;
	}
	while (m >= 10)
	{
		m-=10;
		arr[count]=10;
		count++;
	}
	while(m >= 5)
	{
		m-=5;
		arr[count]=5;
		count++;
	}
	while(m >= 1)
	{
		m-=1;
		arr[count]=1;
		count++;
	}
	arr[count]=-1;
	for(int i=0; arr[i]!=-1;i++)
	{
		printf("%d",arr[i]);
	}
}

//teacher's answer
void calculateChange(int m)
{
	int change[4] = {25, 10, 5, 1};
	while (m>0)
	{
		//keep making change
		if (m > 25)
		{
			printf("25 ");
			m=m-25;
		}
	}
	for(i=0;i<4;i++)
	{
		if(m>change[i])
		{
			printf("%d ", change[i]);
			m-change[i];
			break;
		}
	}
}
int main()
{
	CalculateChange(115);
	return 0;
}