/* Ce programme permet de saisir un caractere et d'affiche sa racine carrée
Mael VERON
septembre 2015 */


#include <stdio.h>
#include <conio.h>



int main (void)
{
float a,r;
puts ("saisir un nombre x");
scanf("%f",&a);   // a <- lire le clavier
r=sqrt(a);      // calculer racine de a
printf("La racine carree de %f est %f",a,r);
system("pause");
}
    
