#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str);
char * my_strcat(char *dest, char *src);
int my_strcmp(char *str1, char *str2);

int main(int argc, char const *argv[]) {

    char first_name[20];
    char last_name[20];

    printf("Enter your first name: ");
    scanf("%s", first_name);


    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("First name length %d\n", my_strlen(first_name));
    printf("Last name length %d\n", my_strlen(last_name));

    char * full_name = my_strcat(first_name, last_name);

    printf("Full name: %s\n", full_name);
    printf("Full name length %d\n", my_strlen(full_name));

    printf("First and last names are equal? %d\n", my_strcmp(first_name, last_name));


    return 0;
}


int my_strlen(char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        i++;
    }
    
    return i;
}

char * my_strcat(char *dest, char *src) {
    int i = 0;
    int j = 0;
    
    while (dest[i] != '\0') {
        i++;
    }
    
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    
    dest[i] = '\0';
    
    return dest;
}

int my_strcmp(char *str1, char *str2) {
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return -1;
        }
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}