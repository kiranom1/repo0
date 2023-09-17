/* Calculate three number(s) average or mean */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int threeNumbers[3], mean;

int main() {
	threeNumbers[0]=94;
	threeNumbers[1]=74;
	threeNumbers[2]=64;
	mean = (threeNumbers[0]+threeNumbers[1]+threeNumbers[2])/3;
	printf("The mean or average of the three number(s) 94, 74, and 64 is: %d \n", mean);

	return 0;
}

/* Imp. note: Declaration-prototype and definition of array(s) or variable(s) please keep seperate. 
 * i.e. Declaration-prototype outside the main function and definition with its values inside the main() function
 * else conflicting-types error occurs
 * Reference: https://linuxhint.com/getting-conflicting-types-for-function-in-c/
 * */
