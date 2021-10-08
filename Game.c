// Project 1 : Number Guessing Game
// Problem : This is gong to be Fun !
// We will write a program that generates a random  number and asks the player to guess it .
// If the players guess is higher than the actual number the program displays 
// "Lower Number Please!!". Similarly if the user guess id too low , the program prints 
// "Higher Number Please!!". When the user guess correct number the program display the 
// number of guesses the player used to arrive at the number .
// Hint: Use Loops & Use a random number generator.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    int number, guess, num_guesses=1;
    printf("#****Number Guessing Game****#\n\n");
    srand(time(0));
    number= rand()%200 + 1; // Generates a random  number between 1 and 200
    // printf("The random number is %d\n", number); 
    //keep running the loop until the number is guessed  
    do
    {
        printf("Guess the Number Between 1 to 200\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower Number Please!!\n");
        }
        else if(guess<number)
        {
            printf("Higher Number Please!!\n");
        }
        else
        {
            printf("You Guessed it in %d attemps\n", num_guesses);
        }
        num_guesses++;
    } while (guess!=number);
      
    return 0;
}