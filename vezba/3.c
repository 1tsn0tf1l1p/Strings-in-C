/*
Napisati program koji menja uneti stringa koji sadrži cifre i znak '-', tako što cifre
između znaka - šiftuje za jedno mesto u levo.

Primer: 345-1354-321
Rezultat: 453-3541-213
*/

#define SIZE 169

#include <stdio.h>
#include <string.h>

int main()
{

    char str[SIZE];

    fgets(str, SIZE, stdin);

    str[strlen(str) - 1] = '-';

    int start = 0;
    int end;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '-')
        {
            end = i - 1;
            for (int j = end; j >= start; j--)
            {
                char temp = str[j];
                str[j] = str[start];
                str[start] = temp;
            }
            start = i + 1;
        }
    }

    str[strlen(str) - 1] = '\0';

    puts(str);

    return 0;
}