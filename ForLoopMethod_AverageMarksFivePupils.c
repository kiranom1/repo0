/* Compute average marks of five students for two subjects */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


float total_mean;

int main() {
	int grades[2][5] = {
	  {80, 70, 65, 89, 90}
	, {85, 80, 80, 82, 87}
	};

	for (int o=0; o<2; o++){
		total_mean = 0;

		for (int m=0; m<5; m++){
			total_mean = (total_mean+grades[o][m]); 
			//total_mean += grades[o][m];
		}

		total_mean = (total_mean/5);
		//total_mean /= 5;
		printf("The average marks of the five-students-group for the subject %d: %.2f \n", o, total_mean);
	}


	return 0;
}
