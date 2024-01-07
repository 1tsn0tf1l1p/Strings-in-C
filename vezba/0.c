/*
Napisati program koji menja unetu rečenicu koja se čuva kao string tako što izbacuje
sve reči koje počinju i završavaju se malim slovom. Pretpostavlja se da se unose samo slova i znak
razmaka (space).

Primer: Recenice se Ne pisu ovakO
Rezultat: Recenice Ne ovakO
*/

#define SIZE 943

#include <stdio.h>
#include <string.h>

int proveri(char *str, int start, int end)
{
    if (str[start] >= 'a' && str[start] <= 'z' && str[end] >= 'a' && str[end] <= 'z')
    {
        return 0;
    }
    return 1;
}

int main()
{

    char str[SIZE];
    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = ' ';

    int start = 0;
    int end;

    int k = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            end = i - 1;
            if (proveri(str, start, end))
            {
                for (int j = start; j <= end; j++)
                {
                    str[k++] = str[j];
                }
                str[k++] = ' ';
            }
            start = i + 1;
        }
    }

    str[k] = '\0';
    puts(str);
    return 0;

    return 0;
}
