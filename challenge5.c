#include <stdio.h>

int main(){

/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/

int c;
//demande a l'utilisateur d'entrer la temperature en celsius
printf("Entrer la temperature en Celsius : ");
scanf("%d",&c);

if (c < 0) printf("L'etat d'eau est Solide");

else if (c >= 100) printf("L'etat d'eau est Gaz");

else if (0 <= c < 100) printf("l'etat d'eau est Liquide");

}