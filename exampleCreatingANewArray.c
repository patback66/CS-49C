#include <stdlib.h>
#include <stdio.h>

// print 1! up to n! 2000 times
void printFactorials(int n) {

     int *iptr;
     int i, j;

     //iptr = new int[n]; // create an array of length n
     iptr = (int *)malloc(n*sizeof(int));
     iptr[0] = 1;
     for (i=1;i<n;i++) {
          iptr[i] = iptr[i-1] * (i+1); // set each element of the array
     }
     for (i=0;i<2000;i++) {
          for (j=0;j<n;j++) {
                printf(“%d “, iptr[j]);
          }
          printf(“\n”);
     }

     //delete [ ] iptr; // free the memory
     free(iptr);
}

int main() {
     printFactorials(5);
}
