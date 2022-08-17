#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str);

int main(int argc, char const *argv[]) {

    printf("%d\n", my_strlen("berk"));


    return 0;
}

int my_strlen(const char *str) {
    
    const char * last = str;

    while (*last) {
        last++;
    }

    return last - str;
}