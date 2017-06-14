/* Ce programme affiche une somme 
Mael VERON
septembre 2015 */


#include<stdio.h>
#include<conio.h>
int main (void)
{
    int a,b,somme;
    puts("Entrer un entier a");
    scanf("%d",&a);
    puts("Entrer un entier b");
    scanf("%d",&b);
    somme=a+b;
    printf("La somme de %d avec %d est : %d\n",a,b,somme);
    system("pause");
}     
