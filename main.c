#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    FILE* fichier = NULL;

    int a;

        for (a=0; a < 1000; a++)
{
    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {

        while(!feof(fichier))
        {
            printf("%c", fgetc(fichier));
        }
        system("PAUSE");
    }
}
}
