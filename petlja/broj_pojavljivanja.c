/*
Napisati program kojim se unose dva stringa s i t. Ispisati broj pojavljivanja stringa t u stringu s.

Opis ulaza

Preko standardnog ulaza korisnik unosi dva stringa s i t.

Opis izlaza

Na standardi izlaz ispisuje se broj pojavljivanja stringa t u stringu s.

Primer 1

Ulaz

abcdabcbfabxx
abc

Izlaz
2

Primer 2
Ulaz
Ovo je ulazni tekst
Proba
Izlaz
0
*/

#define SIZE 1000

#include <stdio.h>
#include <string.h>

int main()
{
    char s[SIZE], t[SIZE];

    fgets(s, SIZE, stdin);
    fgets(t, SIZE, stdin);

    s[strlen(s) - 1] = '\0';
    t[strlen(t) - 1] = '\0';

    int brojac = 0;
    char *ptr = s;

    while ((ptr = strstr(ptr, t)) != NULL)
    {
        brojac++;
        ptr += strlen(t);
    }

    printf("%d\n", brojac);

    return 0;
}
