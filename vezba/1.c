/*
Napisati program koji menja unetu rečenice koja se čuva kao string tako što izbacuje sve
reči koje imaju manje od n karaktera, broj n unosi korisnik. Pretpostavlja se da se unose samo slova i
znak razmaka (space). Primer za n=5.

Primer: Recenica koja ima nekoliko reci
Rezultat: Recenica nekoliko
*/

#define SIZE 100

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];

    int n;
    scanf("%d", &n);

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = ' ';

    int start = 0;
    int end;
    int j = 0;

    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == ' ')
        {
            end = i - 1;
            if (end - start > n)
            {
                for (int k = start; k <= end; k++)
                {
                    str[j++] = str[k];
                }
                str[j++] = ' ';
            }
            start = i + 1;
        }
    }

    str[j] = '\0';

    fputs(str, stdout);

    return 0;
}