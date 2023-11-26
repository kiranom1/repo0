/* Create a pointer to the local variable n called pointer_to_n, and use it to increase the value of n by one. */

/* Program to increase variable-value using pointer */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n=99, *pointer_to_n=&n;

int main() {
	printf("The value of 'n': %d \n", n);

	*pointer_to_n = (*pointer_to_n + 1);
	//*pointer_to_n += 1;
	
	printf("The new value of 'n': %d \n", n);

	return 0;
}
