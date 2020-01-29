#include "functions.h"

int main(void)
{
#if UPPER_LIMIT > 1

	int userGuess = -1;	
	int randomNumber = createNumber(UPPER_LIMIT);	//randomNumber is determined by the function createNumber
	int upperLimit = UPPER_LIMIT;
	int lowerLimit = LOWER_LIMIT;
	
	
	while (PLAYING)
	{		
	
		if (getGuessFromUser(&userGuess, lowerLimit, upperLimit) == true)								//Call to get user input, returns false if a non-number is entered and exits the program
		{
			printf("You have guessed: %d\n", userGuess);
			
			//outputResultsOfGuess takes the return value from evaluateGuess
			//evaluateGuess returns 1 if guess is higher than randomNumber, -1 if lower and 0 if correct
			//outputResultsOfGuess outputs a message based on the return of evaluateGuess
			//outputResultsOfGuess then returns 1 if guess is higher than randomNumber, -1 if lower and 0 if correct and if correct then exits the proram
			if (outputResultsOfGuess(evaluateGuess(randomNumber, userGuess, &lowerLimit, &upperLimit)) == 0)	
			{
				break;
			}
		}
		
	}
	
#else
	printf("[ERROR] - Defined constant can not be less than 1.\n");
#endif
	
	return 0;
}
