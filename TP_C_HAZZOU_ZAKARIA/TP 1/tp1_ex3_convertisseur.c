#include <stdio.h>

int  main()
{
    const float TAUX = 10.80;
    float dirhams;
    float euros;
    char sens_converssion ;

    printf("Entrez 1  pour :  DH -> EUR\n");
    printf("Entrez 2  pour :  EUR -> DH\n");
    scanf(" %c",&sens_converssion);
    if (sens_converssion == '1')
    {
        printf("Montant en DH : ");
        scanf("%f",&dirhams);
        euros = dirhams / TAUX ;
        printf("%.2f DH = %.2f EUR",dirhams , euros);
    
    }
    else if (sens_converssion == '2')
    {
        printf("Montant en EUR : ");
        scanf("%f",&euros);
        dirhams = euros * TAUX ;
        printf("%.2f EUR = %.2f DH",euros , dirhams);
    }





    return 0;
}