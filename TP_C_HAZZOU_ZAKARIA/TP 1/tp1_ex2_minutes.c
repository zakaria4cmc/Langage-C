#include <stdio.h>
int main()
{

    int heures , minutes , duree = 135;
    heures =  duree / 60;
    minutes = duree % 60;
    printf("%d minutes = %d h %d min",duree,heures,minutes);
    return 0;

}