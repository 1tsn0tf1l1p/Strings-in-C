/*
Napisati funkciju koja menja prosleđeni string tako što okrede reči neparne dužine. U glavnom
programu ispisati uneti string posle primene funkcije na njemu. Pretpostavlja se da se unose velika i
mala slova i znak razmaka.
PRIMER:

ikavS nad mi je kinzarp
Svaki dan mi je praznik
*/

#include <stdio.h>
#include <string.h>

#define SIZE 200

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

            if ((end - start + 1) % 2)
            {
                for (int i = start, j = end; i < j; i++, j--)
                {
                    int temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }

            start = i + 1;
        }
    }

    str[strlen(str) - 1] = '\0';

    fputs(str, stdout);

    return 0;
}