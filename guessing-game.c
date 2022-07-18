#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int hidden = rand() % 100;
    //printf("%d\n", hidden);
    int numer_of_guesses = 0;
    while (1)
    {
        int guess;
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
    }
    return 0;
}