
#include <stdio.h>

int main()
{
   
   int NombreDeJour;
   float quntities ;
   float ProductionTotal = 0.0f;
   int ComptuerSup20 = 0;
   float moyenneJournaliere;
   printf("Nombre de jours de production :");
   scanf("%d",&NombreDeJour);
   if (NombreDeJour <= 0)
   {
       printf("pas de production\n");
       return 0;
   }
   for(int i = 0 ; i < NombreDeJour ; i++)
   {
        printf(" Production jour 1 (en L) : ");
        scanf("%f",&quntities);// < 0 cas de 
        ProductionTotal += quntities;
        if (quntities < 0)
        {
            quntities = - quntities;
        }
        
        
        else if (quntities > 20.0f)
        {
           ComptuerSup20++; 
        }
   }
   moyenneJournaliere = ProductionTotal / NombreDeJour;
    printf("\n\n\n");
    printf(" --- RESULTATS --- \n");
    printf("Le produit total est : %.2f L \n",ProductionTotal);
    printf("la moyenne journaliere est : %.2f L/j \n",moyenneJournaliere);
    printf("il y a %d de jours ayant depasse l’objectif de 20 litres\n",ComptuerSup20);
    
   
   

    return 0;
}