#include <stdio.h>
#include <stdlib.h>
int n;
int *iptr;

void func(int n)
{
    int i;
    int *iptr2;
    iptr2 = (int *)malloc(n*sizeof(int));
    if (iptr2 != 0)
    {
        for (i=0; i<n; i++)
        {
            iptr2[i] = 15 + i * 2;
        }
    }
    free(iptr2);
}

int main()
{
    iptr = (int *)malloc(sizeof(int));
    *iptr=75;
    n=*iptr+20;
    free(iptr);
    iptr = (int *)malloc(sizeof(int));
    *iptr = 30;
    n = *iptr + 55;
    free(iptr);
    //n = *iptr + 30;
    //iptr is now pointing to an invalid address
    return 0;
}
