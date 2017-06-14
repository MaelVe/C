/* Ce programme permet de saisir un caractere et d'affiche sa racine carrée ou impossible si le nombre est negatif
Mael VERON
septembre 2015 */


#include <stdio.h>
#include <conio.h>



   

int main (void)
{
    float a,r;   
    puts ("saisir un nombre x");
    scanf("%f",&a);   
    
    if(a>=0)
    {
     r=sqrt(a);        
     printf("La racine carree de %f est %f",a,r);
    }                                               // a <- lire le clavier
    else
    {
    puts("Impossible le nombre est negatif");
    }
                                                      // calculer racine de a
    system("pause");
}
    
