#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {

        while(!feof(fichier))
        {
            printf("%c", fgetc(fichier));
        }
    }

    return 0;
}
