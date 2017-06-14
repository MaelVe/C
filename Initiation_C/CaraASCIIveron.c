/* Ce programme permet de saisir un caractere et d'affiche son code ASCII
Mael VERON
septembre 2015 */


#include<stdio.h>
#include<conio.h>
int main (void)
{
    char a;
    printf("ENTRER UN CARACTERE:");
    a=getchar();
    printf("Le code ASCII du caractere %c est %d",a,a);
    system("pause");

}
