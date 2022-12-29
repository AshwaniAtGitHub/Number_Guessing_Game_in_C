#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number, guess, nguesses = 1;
	srand(time(0));
	number = rand()%50 + 1;
	
	
	do
	{
		printf("Guess a number from 1 to 50\n");
	 	scanf("%d",&guess);
		if(guess<number)
		{
			printf("higher number please!\n");
		}
		else if(guess>number)
		{
			printf("lower number please!\n");
		}
		else
		{
			printf("**CONGRACTULATIONS**\nYOU guessed it in %d attempts", nguesses);
		}
		nguesses++;
	}while(guess!=number);
	
	return 0;
}
