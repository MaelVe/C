/* Ce programme permet d'afficher attente juqu'a ce que l'on appuie sur une touche
Mael VERON
septembre 2015 */

#include <stdio.h>
#include <conio.h>

int main (void)
{
    do
        {
         puts("attente");
        }
while(!kbhit());
system("pause");
}
