#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_print(char *str, int len);
char * sort(char *str, int len);

int main(int argc, char const *argv[])
{

    char name[] = "bacd";

    reverse_print(name, strlen(name));
    
    printf("sorted name is %s\n", sort(name, strlen(name)));

    return 0;
}

char * sort(char *str, int len) {
    int i, j;
    char temp;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    return str;
}

void reverse_print(char *str, int len)
{
    for (int i = len; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}
