/* Ce programme permet de saisir un caractere et d'affiche son code HEXADECIMAL
Mael VERON
septembre 2015 */


#include<stdio.h>
#include<conio.h>

int main (void)
{
    int a;
    printf("ENTRER UN CARACTERE:");
    scanf("%d",&a);
    printf("Le code HEXADECIMAL du nombre entier %d est %x\n",a,a);
    system("pause");

}
