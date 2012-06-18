#include <stdio.h>
#include <stdlib.h>

int r;

int main()
{
	r = rand(); 
	if ((r!=0) && (r%2 == 2))
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
