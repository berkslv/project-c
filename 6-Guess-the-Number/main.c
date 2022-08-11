#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // Initilaze random number generator
    srand(time(NULL));   
    int random_number = rand() % 100 + 1;

    printf("Give me a number between 0 and 100\n");

    while (1)
    {
        int number;
        scanf("%d", &number);

        if (number < 0 || number > 100)
        {
            printf("Invalid number\n");
            return 1;
        }

        if (number == random_number)
        {
            printf("You win!\n");
            return 0;
        }
        else if (number > random_number)
        {
            printf("Too big\n");
        }
        else
        {
            printf("Too small\n");
        }

    }
}