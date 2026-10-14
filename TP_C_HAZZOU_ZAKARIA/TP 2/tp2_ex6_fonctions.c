#include <stdio.h> 
//#include <string.h> 

int estPair(int n)
{
	return (n % 2 == 0)  ? 1 : 0 ;
}
int maximum(int a, int b)
{
	return (a > b) ? a : b ;
}
void afficherLigne(int n);
int  main()
{
	printf("estPair(8) = %d\n", estPair(8));
	printf("estPair(7) = %d\n", estPair(7));
	printf("maximum(12, 19) = %d\n", maximum(12, 19));
	
	afficherLigne(10);
	printf("estPair(0) = %d\n", estPair(0));
	printf("estPair(15) = %d\n", estPair(15));
	printf("estPair(-4) = %d\n", estPair(-4));
	afficherLigne(10);


	return  0;
}
void afficherLigne(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("-");
	}
	printf("\n");
}    