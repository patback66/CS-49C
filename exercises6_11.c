#include <stdio.h>

int arr[80];
int arr2[80];
int pi[5] = {0,1,2,3,4}
int largest=0;
int pos;

int main()
{
	//question 1
	for(int index = 0; index < 81; index++ )
		{
		    if (arr[index]>largest)
			{
				largest = arr[index];
				pos=index;
			}
		}
	//question 3
	//reverse array in place
	//cheating way
	for (int i = 0; i < 80; i++)
	{
		arr2[i]=arr[79-i];
	}
	for(i=0; i<80; i++)
	{
		arr[i] = arr2[i];
	}
	//not cheating way
	for(i=0; i<40;i++)
	//40 so won't go back over
	{
		tmp = arr[79-i];
		arr[79-i]=arr[i];
		arr[i]=tmp;
	}
	return 0;
}
