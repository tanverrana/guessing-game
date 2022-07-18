#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int hidden = rand() % 100;
    printf("\n***** Welcome TO The Guess Number Game *******\n");
    //printf("%d\n", hidden);
    int numer_of_guesses = 0;
    while (numer_of_guesses < 10)
    {
        int guess;

        printf("Enter Your Guess Number:");
        scanf("%d", &guess);
        if (guess == hidden)
        {
            printf("You are right\n");
            break;
        }
        else if (guess > hidden)
        {
            printf("Guess Smaller Value\n");
        }
        else
        {
            printf("Guess larger value\n");
        }
        numer_of_guesses++;
    }
    if (numer_of_guesses == 10)
    {
        printf("You failed\n");
    }
    return 0;
}