#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
There are 25 animals in the zoo. There are 3 elephants and 8 monkeys. There are a total of 2501 visitors per day to the zoo. 

*/
int i;

int main() {
	FILE *fptr;
	char buffer[256];
	int notInteger, value;
	int sum = 0;
	fptr = fopen("fileName.txt", "rt");
	while (!feof(fptr)) {
		if (fscanf(fptr, "%s", buffer); != EOF) {
			for (i=0; i<strlen(buffer); i++) {
				if (buffer[i] < '0' || buffer[i]>'9') {
					notInteger = 1;
				}
			}
			if (notInteger ==0) {
				fscanf(buffer, "%d", &value);
				sum += value;
			}
		}

	}
}
