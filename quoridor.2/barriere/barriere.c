#include <stdio.h>
#include "barriere.h"

//module barrières
void barrieres(int coordb[3])
{
    char min, MAJ;
    int ligne = 0,colonne = 0;
    int sens;
    int fin = 0;
    int confirm = 0;

    printf("Afin de placer une barriere,veuillez choisir une coordonnee en minuscule, puis une en MAJUSCULE\n");
    printf("Ensuite vous choisirez le sens dans lequel vous placerez votre barriere\n");
    do {
        do {
            printf("veuillez choisir une coordonnees minuscule\n");
            fflush(stdin);
            scanf("%c",&min);
            if (min>='a' && min<='h') {fin = 1;}
        }while(fin !=1 );
        fin = 0;
        do {
            printf("veuillez choisir une coordonnees MAJUSCULE\n");
            fflush(stdin);
            scanf("%c",&MAJ);
            if (MAJ>='A' && MAJ<='H') {fin = 1;}
        }while(fin !=1 );
        printf("Vous avez choisi %c et %c \n",min,MAJ);
        printf("Entrer 1 pour confirmer, 0 pour reentrer les coordonnees de la barriere\n");
        fflush(stdin);
        scanf("%d",&confirm);
    }while(confirm != 1);
    ligne = 2*(MAJ - 65) + 3;
    colonne = 2*(min - 97) + 3;
    coordb[0] = ligne;
    coordb[1] = colonne;

    printf("Choisissez le sens de votre barriere\n ");
    printf("'1' pour qu'elle soit verticale et '2' pour qu'elle soit horizontale\n");
    fflush(stdin);
    scanf("%i",&sens);
    printf("marche\n");
    coordb[2] = sens;
}