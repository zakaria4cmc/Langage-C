#include <stdio.h> 
int  main() 
{ 
    int  n, i; // on suppose n diff de 0
    float  note; // sera affecter n fois
    float  somme =  0 ; 

    do
    {
        printf( "Nombre de notes : " ); 
        scanf( " %d" , &n); 
    }
    while (n < 0); // why not < 0

    
    for  (i =  1 ; i <= n; i++) 
    { 
        printf( "Note %d : " , i); 
        scanf( "%f" , &note); 
        somme += note ; 
    } 
    printf("La moyenne est %.2f\n", somme / n);
    return  0 ; 
} 