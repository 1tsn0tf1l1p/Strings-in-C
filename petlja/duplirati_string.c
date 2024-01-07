#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main()
{
    char str[SIZE];

    if (fgets(str, SIZE, stdin) != NULL)
    {
        str[strlen(str) - 1] = '\0';

        char mixer_najbolji_demonstrator[2 * SIZE];
        int brojac = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            mixer_najbolji_demonstrator[brojac] = str[i];
            mixer_najbolji_demonstrator[brojac + 1] = str[i];
            brojac += 2;
        }

        fputs(mixer_najbolji_demonstrator, stdout);
    }

    return 0;
}
