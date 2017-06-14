/* Ce programme permet de faire des calculs simples jusqu'a ce que l'on se trompe
Mael VERON
septembre 2015 */

#include <stdio.h>
#include <conio.h>

int main (void)
{
    float a,b,r;
    char op;
do
{
    puts("Entrer votre calcul :\n");
    scanf("%f",&a);
    scanf("%c",&op);
    scanf("%f",&b);
    
    switch(op)
              {
              case '+':r=a+b;
              break;
              case '-':r=a-b;
              break;
              case '*':r=a*b;
              break;
              case '/':r=a/b;
              break;
              default : puts("erreur signe");
              }
   printf("%f %c %f vaut %f\n",a,op,b,r);
   
}
while(op=='+'||op=='-'||op=='*'||op=='/');
system("pause");  
}
