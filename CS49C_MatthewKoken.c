/*
@author Matthew Koken
*/
#include <stdlib.h>
#include <stdio.h>


int Greatest(int Arr1[], int Len)
{
	int largest = 0;
	for (int i=0; i<Len; i++)
	{
		if(Arr1[i]>largest)
		{
			largest = Arr1[i];
		}
	}
	return largest;
}

void GreatestPositions(int Arr2[], int Len)
{
	int largest = Greatest(Arr2, Len);
	for (int i = 0; i<Len; i++)
	{
		if(Arr2[i]==largest)
			printf("%d ", i);
	}
	printf("\n");
}

int main()
{
    int array[128];
    int smallTest[12] = {1,1,2,2,5,2,5,2,5,2,3,4};
	int greatestNum = Greatest(array, 128);
	printf("%d is the greatest\n", greatestNum);
	GreatestPositions(array, 128);
	greatestNum = Greatest(smallTest, 12);
	printf("%d is the greatest\n", greatestNum);
	GreatestPositions(smallTest, 12);
	return 0;
}
