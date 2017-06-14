  /* Ce programme permet de ranger 3 reel dans un tableau et calculer la moyenne
Mael VERON
septembre 2015 */

#include <stdio.h>
#include <conio.h>

int main (void)
{
    
    float nombre[3],moy;
    puts("Saisir 3 reels : \n");
    scanf("%f",&nombre[0]);
    scanf("%f",&nombre[1]);
    scanf("%f",&nombre[2]);
    moy=(nombre[0]+nombre[1]+nombre[2])/3;
    printf("la moyenne vaut %f",moy);
    system("pause");

}
