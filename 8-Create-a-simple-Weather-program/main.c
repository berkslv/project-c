#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // init 2D array
    float array[5][12];

    // init random seed
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            // generates random float number
            array[i][j] = (float)rand() / (float)(RAND_MAX / 100);
        }
    }

    // define variables for getting average
    float avg;
    float month_avg[12];

    // get average for each year
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            avg += array[i][j];
        }

        printf("%d. year average: %f \n", i + 1, avg / 12);
    }
    
    // console divider
    printf(":::::::::::::::::::::::::::::::::::: \n");

    // get average for each month
    for (int j = 0; j < 12; ++j)
    {
        for (int i = 0; i < 5; ++i)
        {
            avg += array[i][j];
        }

        printf("%d. month average: %f \n", j + 1, avg / 12);
    }

    return 0;
}