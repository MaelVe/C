/* Ce programme affiche a et b en ecriture héxadecimal
Mael VERON
septembre 2015 */


#include<stdio.h>
#include<conio.h>
int main (void)
{
    int a,b;
    a=0xFFFFFFFF;
    b=0xFFFFFFFF;
    printf("a en hexa vaut : %d en decimal",a);
    printf("b en hexa vaut : %u en decimal",b);
    system("pause");
}
