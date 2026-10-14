#include <stdio.h> 
int  main() 
{ 
    float  a, b; 
    char  op; 
    printf( "Premier nombre : " ); 
    scanf( "%f" , &a); 
    printf( "Operateur (+ - * /) : " ); 
    scanf( " %c" , &op); 
    printf( "Second nombre : " ); 
    scanf( "%f" , &b); 
    switch  (op) 
    { 
        case  '+' : 
            printf("Resultat : %.2f\n",a + b );
            break  ; 
        case  '-' : 
            printf("Resultat : %.2f\n",a - b  );
            break  ; 
        case  '*' : 
            printf("Resultat : %.2f\n", a * b);
            break  ; 
        case  '/' : 
            (b != 0) ? printf("Resultat : %.2f\n",a / b ) : printf("divison par zero impossible\n");
            break  ; 
        default  : 
            printf( "Operateur inconnu\n" ); 
            break;
            
    } 
    return  0 ; 
}