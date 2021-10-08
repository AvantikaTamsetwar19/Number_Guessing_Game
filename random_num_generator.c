#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number= rand()%200 + 1; // Generates a random  number between 1 and 200
    printf("The random number is %d", number);     
    return 0;
}