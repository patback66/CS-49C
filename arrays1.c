#include <stdio.h>

int x[10]; // an array of integers
int i;

int main() {
   for (i=0; i<10; i++) { x[i] = 5; }
   for (i=0; i<10; i++) { printf(“%d ”, x[i]); }
   printf(“\n”); 
   for (i=0; i<10; i++) { x[i] += 2*i; }
   for (i=0; i<10; i++) { printf(“%d ”, x[i]); }
   printf(“\n”);
   return 0;
}
