#include <stdio.h>
#include <string.h>

void pomeraj(char str[], int idx)
{
    for (int i = idx; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
}

int main()
{
    char str[1000];

    fgets(str, 1000, stdin);

    str[strlen(str) - 1] = 0;

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            pomeraj(str, i);
            continue;
        }
        i++;
    }

    fputs(str, stdout);

    return 0;
}