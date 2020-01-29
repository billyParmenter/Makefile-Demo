#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define UPPER_LIMIT 10	//Upper limit of guesses, must be greater than 0
#define LOWER_LIMIT 1
#define TOO_HIGH 1		//Return value if guess is too high
#define CORRECT 0			//Return value if guess is correct
#define TOO_LOW -1		//Return value if guess is too low
#define PLAYING 1			//Used in while loop to let player keep guessing

//Creates a random number from 0 to the upperLimit and returns that number
int createNumber (int upperLimit);

//Determines if usersGuess is too high(returns 1), too low(returns -1) or correct (return 0)
int evaluateGuess(int randomNumber, int userGuess, int* lowerLimit, int* upperLimit);

//Ask the user for their guess and validates it is an integer
bool getGuessFromUser(int* userInput, int lowerLimit, int upperLimit);

//Tell the user the results of their guess
int outputResultsOfGuess(int guessResult);
