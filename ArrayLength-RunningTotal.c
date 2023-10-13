/* Calculate running total */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int an[] = {75, 85, 95, 33, 63, 78, 937, 30};

int running_total();

int main() {
	printf("Running-total: %d \n", running_total());
	printf("Running-total: %d \n", running_total());
	printf("Running-total: %d \n", running_total());
	printf("Running-total: %d \n", running_total());
	
	return 0;
}

int running_total() {
	static int total=0;
	for (int o=0; o<(sizeof(an) / sizeof(an[3])); o++) {
		total = total+an[o];
		 /* total += an[o]; */ 
	}
	return total;
}
