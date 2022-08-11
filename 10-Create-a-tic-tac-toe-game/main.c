#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 9
#define ROW_SIZE 3

int table[TABLE_SIZE];

// initialize the table for all fields to -1
void init_table()
{
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
        table[i] = -1;
}

// check for a winner
void chech_win()
{
    int i;

    // checks
    // 1 2 3
    // 4 5 6
    // 7 8 9
    for (i = 0; i < TABLE_SIZE; i += ROW_SIZE)
    {
        if (table[i] == table[i + 1] && table[i + 1] == table[i + 2])
        {
            if (table[i] != -1)
            {
                printf("Player %d wins!\n", table[i]+1);
                exit(0);
            }
        }
    }

    // checks
    // 1 4 7
    // 2 5 8
    // 3 6 9
    for (i = 0; i < ROW_SIZE; i++)
    {
        if (table[i] == table[i + 3] && table[i + 3] == table[i + 6])
        {
            if (table[i] != -1)
            {

                printf("Player %d wins!\n", table[i]+1);
                exit(0);
            }
        }
    }

    // checks
    // 1 5 9
    if (table[0] == table[4] && table[4] == table[8])
    {
        if (table[i] != -1)
        {
            printf("Player %d wins!\n", table[0]+1);
            exit(0);
        }
    }

    // checks 
    // 3 5 7
    if (table[2] == table[4] && table[4] == table[6])
    {
        if (table[i] != -1)
        {
            printf("Player %d wins!\n", table[2]+1);
            exit(0);
        }
    }
}

// draw the table
void draw()
{
    // draws first empty line full of dashes
    for (int j = 0; j < ROW_SIZE; j++)
    {
        printf(" ---");
    }
    printf("\n");

    // draws the rest of the table
    for (int i = 0; i < ROW_SIZE; i++)
    {
        // write the values of the table in the right place
        for (int j = 0; j < ROW_SIZE; j++)
        {
            printf("| ");

            int value = table[i * ROW_SIZE + j];

            if (value < 0)
                printf("  ");
            else
                printf("%d ", value);
        }

        printf("| ");
        printf("\n");

        // add dashes between the rows
        for (int j = 0; j < ROW_SIZE; j++)
        {
            printf(" ---");
        }

        printf("\n");
    }

    printf("\n");
}

void play(int player_number)
{
    int field;

    // get the field to play on
    printf("Player %d, choose a field: ", player_number+1);
    scanf("%d", &field);

    // for human reasons, the field is 1-based
    field--;

    // control the field
    if (field > TABLE_SIZE || field < 0)
    {
        printf("Invalid field!\n");
        return;
    }
    else if (table[field] != -1)
    {
        printf("Field already taken!\n");
        return;
    }
    else
    {
        table[field] = player_number;
    }
}

int main(int argc, char const *argv[])
{
    init_table();
    draw();

    // play the game
    while (1)
    {
        play(0);
        draw();
        chech_win();

        play(1);
        draw();
        chech_win();
    }

    return 0;
}