#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

    if (argc < 3) {
        printf("Usage: %s <width> <height>\n", argv[0]);
        return 1;
    }

    float width = atof(argv[1]);
    float height = atof(argv[2]); 

    printf("Result: %f \n", width * height);    

    return 0;
}