#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    const float TAUX = 10.80f;
    int choix, n, i;
    float dirhams, euros;

    do
    {
        printf("===== MENU =====\n");
        printf("1. Convertir DH -> EUR\n");
        printf("2. Table de multiplication (1-9)\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case  1:
            printf("Montant en DH : ");
            scanf("%f", &dirhams);
            euros = dirhams / TAUX;
            printf("%.2f DH = %.2f EUR", dirhams, euros);
            break;

        case  2:
            do
            {
                printf("Tableau de ");
                scanf("%d", &n);
            } while (n <= 0 || n >= 10); // 0<n<10
            for (i = 0; i <= 10; i++)
            {
                printf("%d x %d = %d \n", n, i, n * i);
            }

            break;
        case  0:
            //printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide\n");
        }
        printf("\n");



    } while (choix != 0);
    printf("Au revoir ! \n");


    return 0;
}