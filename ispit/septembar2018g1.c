/*
Napisati program koji učitava string koji se sastoji od malih slova abecede i od njega pravi novi
 string u kom je pre i posle svakog podstringa koji se sastoji od istih susednih slova umetnuta crtica.

Opis ulaza
Preko standardnog ulaza korisnik unosi string s.
Opis izlaza
Na standardi izlaz ispisuje se traženi string.

Primer 1

Ulaz
abbcfffggtt
Izlaz
a-bb-c-fff-gg-tt-

*/

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

#define SIZE 999

int main()
{
    char str[SIZE], novistr[2 * SIZE]; // Double the size to accommodate additional characters

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = '\0';

    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        novistr[j++] = str[i];

        while (str[i] == str[i + 1])
        {
            novistr[j++] = '-';
            i++;
        }

        i++;
    }

    novistr[j] = '\0';

    fputs(novistr, stdout);

    return 0;
}
