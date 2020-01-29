#include "functions.h"


//Creates a random number from 0 to the upperLimit and returns that number
int createNumber (int upperLimit)
{
	int randomNumber = 0;
	
	srand(time(0));	//seed rand() for a pseudo random number
	
	randomNumber = 1 + (rand() % upperLimit);
	
	return randomNumber;
}





//Determines if usersGuess is too high(returns 1), too low(returns -1), correct (return 0), or error (return -2)
int evaluateGuess(int randomNumber, int userGuess, int* lowerLimit, int* upperLimit)
{
	int returnValue = -2;

	if (userGuess > randomNumber)
	{
		returnValue =  TOO_HIGH;
		if (userGuess < *upperLimit)
		{
			*upperLimit = userGuess;
		}
	}
	
	else if (userGuess < randomNumber)
	{
		returnValue =   TOO_LOW;
		if (userGuess > *lowerLimit)
		{
			*lowerLimit = userGuess;
		}
	}
	
	else
	{
		returnValue =   CORRECT;
	}
	
	return returnValue;
}





//Ask the user for their guess and validates it is an integer, if it is not end the program
bool getGuessFromUser(int* userInput, int lowerLimit, int upperLimit)
{
	bool returnValue = false;
	printf("\nWelcome to the integer guessing game!\n");
	printf("Enter a number between %d and %d : ", lowerLimit, upperLimit);
	
	
	if(scanf("%d", userInput) ==  1)
	{
		returnValue =  true;
	}
	
	else
	{
		printf("[ERROR] - Invalid input\nTry again.\n");
		while ((getchar()) != '\n')
		{
		}
		returnValue =  false;
	}
	
	return returnValue;
}





//Tell the user the results of their guess
int outputResultsOfGuess(int guessResult)
{

	if (guessResult == TOO_LOW)
	{
		printf("Sorry guess is too low. Try again!\n");
	}
	
	else if (guessResult == TOO_HIGH)
	{
		printf("Sorry guess is too high. Try again!\n");
	}
	
	else if (guessResult == CORRECT)
	{
		printf("Thats right! You win!\n\n");
	}
	
	else
	{
		printf("[ERROR] - Unknown error!");
	}
	
	return guessResult;
}
