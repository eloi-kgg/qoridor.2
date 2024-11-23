#include <stdio.h>
#include <string.h>
#include "pseudo.h"



//module pseudo
void crpseudo(char pseudo[nb_pseudo_max][longueur_pseudo_max], int *pnbj)
{
    int j;
    printf("combien il y a-t-il de joueurs?( 2 ou 4 )\n");
    fflush(stdin);
    scanf("%d",&j);

    //il ne peut y avoir que 2 ou 4 joueurs
    while ((j!=2)&&(j!=4)) {
        printf("il ne peut y avoir que 2 ou 4 joueurs, combien il y en t-il?");
        fflush(stdin);
        scanf("%d",&j);
    }
    *pnbj = j;

    int i;
    for (i = 0; i < j; i++)
    {
        printf("Entrer le pseudo du joueur %d, avec un maximum de %d caracteres\n", i + 1,longueur_pseudo_max-1);
        //utilisation de fgets qui lit et met un texte dans un tableau jusqu'au \n et ne lit jusqu'au n-1ieme terme
        //stdin comme un scanf, va avec le fgets
        fflush(stdin);
        fgets(pseudo[i],longueur_pseudo_max+1,stdin);
        //strlen calcul la longeur du pseudo et size_t calcul la longeur du pseudo et la met dans la variable t
        size_t t = strlen(pseudo[i]);
        //on enleve le \n et on met un \0 pour que ce soit la fin des caracteres du pseudo dans le tableau
        if (t > 0 && pseudo[i][t - 1] == '\n') {
            pseudo[i][t - 1] = '\0';
        }

    }
}