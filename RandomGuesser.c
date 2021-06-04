#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	int max = atoi(argv[1]);
	srand(time(0));
	int randomVar = rand() % max + 1;
	int guess;

	do 
	{
		printf("Guess a number between 1 and: %d: ", max);
		scanf("%d", &guess);

		if(guess < randomVar) {
			puts("Too low");
		} else if(guess > randomVar) {
			puts("Too High");
		}
		
	} while(guess != randomVar);

	puts("Hurray You Win!");

	return(0);
}