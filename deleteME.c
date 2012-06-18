#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a, c;
	char b, d;
	for(a = 0, c = 80, b = 'A', d = 'Z'; a != b && a != c && a != d && b != c && c != d && d > -5; a++, b++, c--, d--)
	{printf("%d %c %d %c\n", a, b, c, d);}
	printf("\n");
	return 0;
}
