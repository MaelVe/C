//ce programme sert a determiner si un nombre est plus grand que l'autre
//Septembre 2015
//Mael VERON

#include <stdio.h>
#include <conio.h>

int main (void)
{
    int a,b;
    puts("saisir 2 reel\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b)
            {
            printf("%d est superieur a %d",a,b);
            }
             else
                 {
                       if(b>a)
                       {
                              printf("%d est superier a %d",b,a);
                              }
                              else
                              {
                                  printf("%d est egal a %d",b,a);
                                  }
                 }
     system("pause");
}
