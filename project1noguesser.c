#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    printf("guess a number\n");
    do
    {
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("lower no. please\n");
        }
        else if (guessed < random_number)
        {
            printf("higher no please\n");
        }
        else
        {
            printf("congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != random_number);
    printf("you guessed the no. in %d attempts\n", no_of_guesses);
    return 0;
}