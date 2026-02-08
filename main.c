#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;

    srand(time(0));              // Seed the random number generator
    randomNumber = (rand()%100 + 1);       // Generate random number
    int guessed_number;                 /*if you want to genrate random number between
	                                     1 to 1000 then change %100 to %1000 .*/
    int no_of_guess=0;
    //printf("Random number: %d\n", randomNumber);
    do {
    	printf("Guess the number :");
    	scanf("%d", &guessed_number);
    	if (guessed_number>randomNumber){
    		printf("Lower number please");
    	}
    	else if (guessed_number<randomNumber){
    		printf("Higher number please");
		}
		else {
			printf("Congreats");
		}
    	no_of_guess++;
	}while(guessed_number!=randomNumber);
	printf("You guesse the number in %d guesses",no_of_guess);

    return 0;
}

