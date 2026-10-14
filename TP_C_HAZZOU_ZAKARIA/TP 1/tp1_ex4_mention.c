#include <stdio.h> 
 int  main() 
 { 
    float  moyenne; 
    printf(  "Moyenne : "  ); 
    scanf("%f" , &moyenne); 
    /* MIN < Moyenne < Max */
    if  (moyenne >= 16 && moyenne <=20 ) 
    { 
        printf("Tres bien \n");
    } 
    else if (moyenne >= 14 && moyenne < 16)
    {
        printf("Bien \n");
    }
    else if (moyenne >= 12 && moyenne < 14)
    {
        printf("Assez bien \n");
    }
    else if (moyenne >= 10 && moyenne < 12) // 10<=M<12
    {
        printf("Passable \n");
    }
    else if (moyenne >= 0 && moyenne < 10)
    {
        printf("Non admis \n");
    }
    
    // case of moyenne <  0  || moyenne >  20  + input errors
    else 
    { 
        printf(  "Moyenne invalide\n"  ); 
    } 
 return  0  ; 
 } 