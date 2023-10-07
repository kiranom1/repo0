/* Functions program */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ar[] = {33, 9, 27, 4, 6, 45, 3};
void print_big(int x);

int main() {

	for (int o=0; o<7; o++){
		print_big(ar[o]);
	}

	/*
	print_big(15);
	print_big(9);
	*/

	return 0;
}

void print_big(int x) {
	if (x>10) {
		printf("%d is big \n", x);
	}
}
