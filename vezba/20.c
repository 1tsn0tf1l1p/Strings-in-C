/*
Napisati program koji ucitava string koji sadrzi brojeve odvojene razmacima. U svakom broju treba promeniti simetricne
cifre na sledeci nacin. Prva cifra i poslednja cifra se uvecavaju za jedan, druga cifra i pretposlednja cifra se uvecavaju
za dva itd. Ako pri uvecavanju broj bude veci od 9, ispisati poslednju cifru.
Nije dozvoljeno koristiti dodatne stringove.

Input: 4385 53913 335
Output: 5506 65234 456
*/

#define SIZE 216

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = ' ';

    int start = 0;
    int end;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            end = i - 1;

            int brojac = 1;

            for (int i = start, j = end; i <= j; i++, j--)
            {

                int leva = str[i] - '0';
                int desna = str[j] - '0';

                leva += brojac;
                desna += brojac;

                if (leva > 9)
                {
                    leva = leva % 10;
                }

                if (desna > 9)
                {
                    desna = desna % 10;
                }

                str[i] = leva + '0';
                str[j] = desna + '0';

                brojac++;
            }

            start = i + 1;
        }
    }

    str[strlen(str) - 1] = '\0';

    fputs(str, stdout);

    return 0;
}