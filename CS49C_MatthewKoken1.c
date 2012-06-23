//Matthew Koken
//Homework 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//#1
	//print all letters a-z
	char character = 'a';
	while (character <= 'z')
	{
		printf("%c\n",character);
		character++;
	}
	printf("\n");
	//#2
	//print all primes <= 200
	//1 is unique, discard
	//evens cannot be prime, except for 2
	for (int number = 2, divisor = 1, prime; number < 201; number++){
		for(divisor = 2; divisor < number; divisor++){
			if (number % divisor == 0){
			prime = 0;
			break;
			}
			prime = 1;
		}if(prime)
		{printf("%d\n", number);}
	}
	printf("\n");
	/*#3
	print 0 A 80 Z, increment 2st 2 & decrement next 2 on each new line until
	any 2 values are the same
	 0 A 80 Z
	 a b  c d
	 */
	int a, c;
	char b, d;
	for(a = 0, c = 80, b = 'A', d = 'Z'; a != b && a != c && a != d && b != c && c != d && c >= 0; a++, b++, c--, d--)
	{printf("%d %c %d %c\n", a, b, c, d);}
	printf("%d %c %d %c\n", a, b, c, d);
	return 0;

}
