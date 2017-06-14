/* Ce programme permet de calculer x puissance n
Mael VERON
septembre 2015 */

#include <stdio.h>
#include <conio.h>

int main (void)
{
    int n;
    float i,x,resultat;
    puts("saisir un reel:\n");
    scanf("%f",&x);
    puts("saisir une puissance:\n");
    scanf("%u",&n);
    resultat=1;
    for(i=1;i<n;i++)
    {
                    resultat=x*x;
                    
    }
    printf("Le reel %f a la puissance %d vaut %f\n",x,n,resultat);
                    
                               
    system("pause");
}
    
