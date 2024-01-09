/*
Napisati program koji menja uneti string koji sadrži cifre i znak '-', tako što cifre između
znaka - šiftuje za jedno mesto u desno.

Primer: 345-135-3217
Rezultat: 534-513-7321
*/

#define SIZE 110

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
            for (int j = start; j <= end; j++)
            {
                char temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }
            start = i + 1;
        }
    }

    str[strlen(str) - 1] = '\0';
    puts(str);

    return 0;
}