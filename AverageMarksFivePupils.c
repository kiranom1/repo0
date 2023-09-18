/* Compute average marks of five students for two subjects */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


float maths_average, physics_average, maths_total, physics_total;

int main() {
	int grades[2][5] = {
	  {80, 70, 65, 89, 90}
	, {85, 80, 80, 82, 87}
	};
	
	for (int o=0; o<5; o++){
		maths_total = (grades[0][0] + grades[0][1] + grades[0][2] + grades[0][3] + grades[0][4]);
	}
	
	for (int o=0; o<5; o++){
		physics_total = (grades[1][0] + grades[1][1] + grades[1][2] + grades[1][3] + grades[1][4]);
	}
	
	maths_average = (maths_total/5);
	physics_average = (physics_total/5);

	printf("The average marks of a group of five students for Mathematics and Physics are %.2f and %.2f respectively. \n", maths_average, physics_average); 

	return 0;
}
