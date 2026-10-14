#include <stdio.h>

int  main()
{
    // Decalaration de entrees
    const float TVA = 0.20f; //tau de tva 20%
    int quantites;
    float prix_unitaire;
    // Decalaration de sorties
    float Total_HT, Montant_TVA , Total_TTC;
    // Affectation des entrees
    quantites = 3;
    prix_unitaire = 45.5f;
    // calcul des sorties
    Total_HT = quantites * prix_unitaire; //int * float => float
    Montant_TVA = Total_HT * TVA; // float * int  => float
    Total_TTC = Total_HT + Montant_TVA; // float - float => float
    // affichage
    printf("Total HT            : %.2f DH\n",Total_HT);
    printf("Montant TVA (20%%)   : %.2f DH\n",Montant_TVA);
    printf("Total TTC           : %.2f DH\n",Total_TTC);



    return 0;
}