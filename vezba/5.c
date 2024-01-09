/*
Napisati program koji učitava string koji sadrži reči razdvojene spejsom i od njega pravi
novi string koji sadrži samo reči koje se ponavljaju u unetom stringu (pojavljuju se u unetom stringu
više od jednom).

Primer: prvi drugi prvi treci drugi
Rezultat: prvi drugi
*/

#define SIZE 150

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE], novi_str[SIZE] = "", pomocni[SIZE] = "";

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = ' ';

    char *token = strtok(str, " ");

    while (token)
    {
        if (strstr(pomocni, token) == NULL)
        {
            strcat(strcat(pomocni, token), " ");
        }
        else
        {
            strcat(strcat(novi_str, token), " ");
        }

        token = strtok(NULL, " ");
    }

    novi_str[strlen(novi_str) - 1] = '\0';
    puts(novi_str);

    return 0;
}