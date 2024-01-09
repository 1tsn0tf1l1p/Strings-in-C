/*
Napisati program koji učitava string koji sadrži mala slova i crtice i od unetog stringa
pravi novi string u kom su u podstringu između crtica izbačena sva ponovna pojavljivanja istog slova
(rezultujudi podstring sadrži jedno pojavljivanje svakog slova iz podstringa u unetom stringu).

Primer: abba-affg-ccc-fgh
Rezultat: ab-afg-c-fgh
*/

#define SIZE 100

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];
    fgets(str, SIZE, stdin);

    char novi[SIZE] = "", partition[SIZE] = "";
    char *token = strtok(str, "-");

    while (token != NULL)
    {
        int k = 0;
        for (int i = 0; i < strlen(token); i++)
        {
            if (strchr(partition, token[i]) == NULL)
            {
                partition[k++] = token[i];
            }
        }
        partition[k] = '\0';
        strcat(strcat(novi, partition), "-");
        strcpy(partition, "");
        token = strtok(NULL, "-");
    }

    novi[strlen(novi) - 1] = '\0';

    puts(novi);

    return 0;
}
