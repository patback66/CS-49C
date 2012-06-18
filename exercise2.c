#include <stdio.h>
#include <stdlib.h>

int main()
{
	//print characters a through z
	char r;
	r='a';
	while(r<='z')
	{
		printf("%c", r);
		r++;
	}
	return 0;
}
