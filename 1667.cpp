#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define MAXSIZE 110

char string[MAXSIZE];

int main(int argc, char **argv)
{

    int aux = 0;
    while (scanf("%s", string) != EOF)
    {

        if (strcmp(string, "<br>") == 0)
            puts(""), aux = 0;
        else if (strcmp(string, "<hr>") == 0)
        {

            if (aux > 0)
                puts(""), aux = 0;

            puts("--------------------------------------------------------------------------------");
            aux = 0;

        }
        else
        {

            if (aux == 0)
                printf("%s", string), aux += strlen(string);
            else
            {

                if (aux + strlen(string) >= 80)
                {

                    puts(""), printf("%s", string);
                    aux = 0;
                    aux += strlen(string);

                }
                else
                    printf(" %s", string), aux += strlen(string) + 1;

            }

        }

    }

    if (aux > 0)
        puts("");

    return 0;

}
