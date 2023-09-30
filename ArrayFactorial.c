/* Factorial of the integer-array-items */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int intArray[10] = {5, 3, 2, 4, 8, 6, 7, 8, 2, 33};
int intArrayFactorial(), factorialProduct;

int main() {
	printf("The factorial of the integer-array: %d \n", intArrayFactorial());


	return 0;
}


int intArrayFactorial() {

	factorialProduct=1;
	for (int o=0; o<10; o++) {
		factorialProduct = (factorialProduct * intArray[o]);
		 //factorialProduct *= intArray[o];
		}
		return factorialProduct;
}
