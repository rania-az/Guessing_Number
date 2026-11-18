#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts = 1;

    srand(time(NULL));

    secretNumber = rand() % 100 + 1;

    printf(" GUESSING NUMBER  GAME \n");
    printf("Guess a number between 1 and 100: ");

    scanf("%d", &guess);

    while (guess != secretNumber)
    {
        if (guess < secretNumber)
        {
            printf("Too low! Try again: ");
        }
        else
        {
            printf("Too high! Try again: ");
        }

        scanf("%d", &guess);

        attempts++;
    }

    printf("\nCongratulations! You found the number!\n");
    printf("Number of attempts: %d\n", attempts);

    return 0;
}
