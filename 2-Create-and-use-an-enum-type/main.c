#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

    enum days {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    enum days day = MONDAY;

    printf("%d\n", day);

    return 0;
}