#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

    if (argc < 2) {
        printf("Usage: %s <minutes>\n", argv[0]);
        return 1;
    }

    int minutes = atoi(argv[1]);

    double years = minutes / (60 * 24 * 365);
    double days = (minutes - (years * 60 * 24 * 365)) / (60 * 24);

    printf("%d minutes is approximately %f years and %f days.\n", minutes, years, days);

    return 0;
}