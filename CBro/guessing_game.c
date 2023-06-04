#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;

    printf("%d\n", answer);

    do
    {
        printf("Guess a number between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
                guesses++;
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("You got it in %d guesses!\n", guesses);
        }



    } while (guess != answer);
    

    return 0;
}
