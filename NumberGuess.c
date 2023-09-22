/* Number guess comment program */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int num0=555;
void guessNumber(int usernum);


int main(){
	guessNumber(575);
	guessNumber(555);
	guessNumber(543);

	return 0;
}


void guessNumber(int usernum){
	if (usernum == num0) {
		printf("You guessed it correct! \n");
	}
	else if(usernum < num0){
		printf("Your guess is low.\n");
	}
	else printf("Your guess is high.\n");

}
