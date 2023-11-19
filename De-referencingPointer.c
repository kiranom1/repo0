/*  De-referencing pointer program */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float o = 78.95, *pointerToSmallo = &o;
int m[] = {87, 932, 43677845, 3538, 222, 4368579, 1356};
void msize();

int main() {
	printf("Float-variable 'o': %.2f \n", o);
	printf("Float-pointer-variable '*pointerToSmallo': %.2f \n\n", *pointerToSmallo);

	msize();

	return 0;
}

void msize() {
	for (int mm=0; mm<(sizeof(m)/sizeof(m[3])); mm++) {
		printf("m[%i] = %d \n", mm, m[mm]);
	}
}

