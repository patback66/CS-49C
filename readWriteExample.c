#include <stdio.h>

float farray[100];
float farray2[10];

int main() {
      int i;
      FILE *fptr;

      for (i=0;i<100;i++) farray[i] = 0.189 * (float)i; // set some values in farray
	
      fptr = fopen("example.dat","wb"); // open file for writing
      fwrite(farray, sizeof(float), 100, fptr); // write to file from farray
      fclose(fptr);

      fptr = fopen("example.dat","rb"); // open file for reading
      fread(farray2, sizeof(float), 10, fptr); // read from file into farray2
      fclose(fptr);

      for (i=0;i<10;i++) printf("%f ", farray2[i]);
      printf("\n");

      return 0;
}
