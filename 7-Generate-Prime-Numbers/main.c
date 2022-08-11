#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int is_prime(int n)
{
    if (n == 2 || n == 3)
        return 1;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{

    Array arr;
    arr_init(&arr, 20);

    for (size_t i = 0; i < 100; i++)
    {
        if (is_prime(i))
            arr_insert(&arr, i);

    }

    for (size_t i = 0; i < arr.used; i++)
    {
        printf("%d ", arr.array[i]);
    }

    printf("\n");
    return 0;
}