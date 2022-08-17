#include <stdio.h>
#include <stdlib.h>

void square(int *x);


int main(int argc, char const *argv[]) {

    int x = 10;

    square(&x);

    printf("%d\n", x);

    return 0;
}

void square(int *x) {
    *x = *x * *x;
}