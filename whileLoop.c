/*  Program - while loop */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
	int ar[10] = {2, 3, 8, 6, 5, 4, 7, 9, 8, 8};
	int o=0;

	while (o<10) {
		if (ar[o]<5) {
			(o=o+1); //Very important, so that it brings the program-control to 8 in this case
			//o++;
			continue;
		}

		if (ar[o]>10) {
			break;
		}
		printf("%d  ", ar[o]);


		(o=o+1);
		//o++;
	}
	
	return 0;
}


