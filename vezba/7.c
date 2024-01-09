/*
Napisati program koji učitava string koji sadrži mala slova i crtice i od unetog stringa
pravi novi string u kom je svaki podstring između crtica zamenjen slovima koji se u podstringu
unetog stringa pojavljuju više od jednom (u bilo kom redosledu).

Primer: abba-afgf-ccc-fgh
Rezultat: ab-f-c
*/

#define SIZE 150

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];
    fgets(str, SIZE, stdin);

    char novi[SIZE] = "", pomocni[SIZE] = "";
    char *token = strtok(str, "-");

    int start = 0;

    while (token)
    {
        int brojac = 0;
        int index_slova = start;

        for (int j = 0; j < strlen(token); j++)
        {
            for (int i = 1; i < strlen(token); i++)
            {
            }
        }
    }

    return 0;
}