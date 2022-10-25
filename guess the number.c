#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int number , guess , n_guesses=1;
	
	srand(time(0)); //it will generates time in seconds and is different everytime we generate it
	
	number=rand()%100 +1 ; //it will generate random number between 1 and 100
	
	//keep running the loop until the number is guessed
	do
	{
		printf("Guess the number between 1 to 100 ");
		scanf("%d" , &guess);
		if(guess>number)
		{
			printf("Lower number please !\n");
		}
		else if(guess<number)
		{
			printf("Higher number please !\n");
			
		}
		else
		{
			printf("You guessed it in %d attempts\n", n_guesses);
			
		}
		n_guesses++;
		
	}while(guess!=n_guesses);
	return 0;
	
}