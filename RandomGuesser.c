#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	puts("test");

	int maximum_number = atoi(argv[1]);
	int target_number = rand() % maximum_number + 1;
	bool guess_is_wrong;

	do 
	{
		int guess;
		printf("Guess a number between 1 and: %d: ", maximum_number);
		scanf("%d", &guess);

		bool too_low = guess < target_number;
		bool too_high = guess > target_number;
		guess_is_wrong = too_low || too_high;

		if(too_low) puts("Too Low");
		if(too_high) puts("Too High");

		
	} while(guess_is_wrong);

	puts("Hurray You Win!");

	return(0);
}