#include <stdio.h>

int i;
char c;

int main()
{
	if(c<48 || c>57)
	{
		i=0;
	}
	else
	{
		i = c-48;
	}
	return 0;
}


