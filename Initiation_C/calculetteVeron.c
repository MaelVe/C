/* Ce programme permet defaire des calculs simples
Mael VERON
septembre 2015 */

#include <stdio.h>
#include <conio.h>

int main (void)
{
    float a,b,r;
    char op;
    puts("Entrer votre calcul :");
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
  printf("%f %c %f vaut %f",a,op,b,r);
  system("pause");
}
