#include <stdio.h>
#include <stdbool.h>
int main()
{
    int anne;
    bool est_bissextile;

    printf("veuillez vous entrez la annne : \n");
    scanf("%d",&anne);
                    // !(anne % 100 == 100)
    est_bissextile = (((anne % 4) == 0) && ((anne % 100) != 0)) || ((anne % 400) == 0) ;

    if (est_bissextile) 
    {
        printf("oui\n");
    }
    else
    {
        printf("non\n");
    }

    return 0;
}