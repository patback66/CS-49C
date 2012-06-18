#include <stdio.h>


int check(int m) {
   printf(“checking\n“);
   if (m>50) {
      return 0;
   } else {
      return 1;
   }
}

int square(int x) {
   printf(“square\n“);
   return x * x;
}

int main() {
   int i;
   for (i=2;check(i);i = square(i)) {
       printf(“in loop %d\n”, i);
   }
   printf(“done\n”);
}
