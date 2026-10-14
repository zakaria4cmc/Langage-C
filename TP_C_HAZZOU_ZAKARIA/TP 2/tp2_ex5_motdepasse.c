

#include <stdio.h> 
#include <string.h> 
int  main()
{
	char  motDePasse[30];
	int  longueur;
	printf("Mot de passe : ");
	scanf("%29s", motDePasse);
	// TODO : calculer longueur avec strlen et l'afficher 
	longueur = strlen(motDePasse);
	printf("Longueur : %d lettres \n", longueur);

	// TODO : comparer motDePasse avec "agadir" en utilisant strcmp 
	printf("Acess %s\n", strcmp(motDePasse,"agadir") == 0 ? "autorise" :"refuse");
	       
	return  0;
}