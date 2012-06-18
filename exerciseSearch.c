#include <stdlib.h>

int a[100];
int i;

//returns 1 if n is in a, 0 otherwise 
int search(int n)
{
	int i;
	for(i=0;i<100;i++)
	{
		if(n==a[i])
		{
			return 1;
		}
	}
	return 0;
}

inf factorial(int n)
{
	if((n==0)||(n==1))
	{
		return 1;
	}else
	{
		return n*factorial (n-1);
	}
}

int main()
{
	int found = 0;
	for (i=0;i<100;i++)
	{ 
		a[i] = rand()%500;
	}
	for (int b = 1; b<9; b++)
	{
		if(search(factorial(b)))
		{
			found = 1;
			//printf("Yes");
			//return 1;
		}
	}
	if (found)
	{
		printf("No");
	}
	return 0;
}