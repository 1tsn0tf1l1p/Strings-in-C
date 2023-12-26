#define SIZE 1000

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = 0;

    int i = 0;

    char prosli = str[i];
    char trenutni = str[i + 1];

    return 0;
}