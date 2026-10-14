#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int  main()
{
    int  n, i;

    for (n = 1; n <= 10; n++)
    {
        printf("  |Tableu de %1d|\n", n);
        printf("|------------------|\n");
        for (i = 0; i <= 10; i++)
        {
            printf("|%3d x %3d = %3d   |\n", n, i, n * i); //n  i = resultat
        }
        printf("|------------------|\n\n");
    }
    return  0;
}