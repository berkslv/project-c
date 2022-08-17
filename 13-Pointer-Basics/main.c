#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
    int number = 5;
    int * pnumber = &number;

    printf("The value of number is: %d\n", number);
    printf("The value of pnumber is: %d\n", *pnumber);
    printf("The address of number is: %p\n", &number);
    printf("The address of pnumber is: %p\n", pnumber);
    printf("---\n");

    *pnumber = *pnumber + 1;

    printf("The value of number is: %d\n", number);
    printf("The value of pnumber is: %d\n", *pnumber);
    printf("The address of number is: %p\n", &number);
    printf("The address of pnumber is: %p\n", pnumber);
    printf("---\n");

    number = number + 1;

    printf("The value of number is: %d\n", number);
    printf("The value of pnumber is: %d\n", *pnumber);
    printf("The address of number is: %p\n", &number);
    printf("The address of pnumber is: %p\n", pnumber);
    printf("---\n");

    return 0;
}