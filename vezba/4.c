/*
Napisati program koji učitava string koji sadrži reči razdvojene spejsom i od njega pravi
novi string koji sadrži sve različite reči iz unetog stringa (izbačena su sva naredna pojavljivanja iste
reči).

Primer: prvi drugi prvi treci drugi
Rezultat: prvi drugi treci
*/

#define SIZE 200

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE], izmenjeni_str[SIZE] = "";

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = '\0';

    char *token = strtok(str, " ");

    while (token)
    {
        if (strstr(izmenjeni_str, token) == NULL)
        {
            strcat(strcat(izmenjeni_str, token), " ");
        }

        token = strtok(NULL, " ");
    }

    izmenjeni_str[strlen(izmenjeni_str) - 1] = '\0';

    puts(izmenjeni_str);

    return 0;
}