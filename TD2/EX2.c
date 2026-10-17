#include <stdio.h>
#include <stdlib.h>
const int PIN = 1234;
float Solde = 1000.00;//global
int verifierPIN()
{
	int password;
	int essais = 1;

	do
	{
		printf("Entrez votre code PIN : ");
		scanf("%d", &password);

		if (password == PIN)
			return 1;

		printf("Code incorrect. ");
		printf("Essais restants : %d\n", 3 - essais);

		essais++;

		if (essais > 4)
		{
			printf("Carte avalee\n");
			return 0;
		}

	} while (essais <= 3);

	return 0;
}
void afficherMenu()
{
	printf
	("=======GAB=======\n"
		"Pour arrter Retrait ou Depot il faut saisir 0 ! \n"
		"1. Retrait\n"
		"2. Depot\n"
		"0.Quitter\n"

	);
}
void Retrait()
{
	int montant;

	do
	{
		printf("Montant a retirer (multiple de 100) : ");
		scanf("%d", &montant);

		while (getchar() != '\n');
		if (montant > Solde)
		{
			printf("Solde insuffissant \n");
		}
		else if (montant % 100 != 0)
		{
			printf("Montant doit etres X00 ou x est un entier \n");
		}

	} while (montant % 100 != 0 || montant > Solde);

	Solde -= montant;

	printf("Retrait effectue. Nouveau solde : %.2f DH\n", Solde);
}
void Depot()
{
	float montant;

	do
	{
		printf("Saisir le montant pour le depot :  ");
		scanf("%f", &montant);
	
		if (montant < 0)
			printf("Erreur montant invalide . \n");
	} while (montant < 0);
	Solde += montant;
	printf("Depot effectue. Nouveau solde : %.2f DH\n", Solde);



}
void traiterMenu()
{
	int choix;

	do {
		afficherMenu();
		printf("Votre choix : ");
		scanf("%d", &choix);
		while (getchar() != '\n');
		switch (choix)
		{
			case 1:
				Retrait();	
				break;
			case 2:
				Depot();
				break;
			case 0:
				printf("\nAu revoir. \n");
				break;
			default :
				printf("Invalide choix \n");
				break;
		}

	} while (choix != 0);

}
int main()
{



	if (verifierPIN(PIN))
	{
		printf("Bienvenu dans votre espace client \n\n");
		traiterMenu();
	}
	else
	{
		printf("Compte desactive! Avoir a notre Agence pour reavitve");
	}


	return 0;
}