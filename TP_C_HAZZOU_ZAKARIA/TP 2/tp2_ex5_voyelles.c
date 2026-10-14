#include <stdio.h> 
//#include <string.h>
void strlwr(char* s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
}










int  main()
{
    char  mot[50];
    int  i;
    int  nb = 0;
    printf("Mot : ");
    scanf("%49s", mot); //0 - lenth (Real_lenth = lenth  +1)
    strlwr(mot);

    for (i = 0; mot[i] != '\0'; i++)
    {   //"123" : "123\0" donc len 3 - Rlen 4 index : 0 - 1 - 2 - 3(\0)
        // TODO : tester si mot[i] est une voyelle 
        // (comparer avec 'a', 'e', ... en  utilisant ||) 
        if (mot[i] == 'a' ||
            mot[i] == 'e' ||
            mot[i] == 'i' ||
            mot[i] == 'o' ||
            mot[i] == 'u' ||
            mot[i] == 'y')
        {
            // TODO : augmenter nb
            nb++;
        }


        //    
        //     
        //}
    }
        printf("%s contient %d voyelles par %d charcteres.\n", mot, nb, i);
        return  0;
}