/* Edit De-referenced variable contents */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int o=94, *pointerToo=&o;

int main() {
	o=(o+1);
	//o += 1;

	*pointerToo=(*pointerToo + 2);
	//*pointerToo += 2;

	printf("The De-referenced Variable 'o' now after-editing: %d \n", o);
}
