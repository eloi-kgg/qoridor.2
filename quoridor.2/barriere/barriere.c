#include <stdio.h>
#include "barriere.h"


//module barrières
void barrieres(char plate[N][N], int coordb[3])
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
            printf("Veuillez choisir une coordonnees minuscule\n");
            fflush(stdin);
            scanf("%c",&min);
            if (min>='a' && min<='h') {fin = 1;}
        }while(fin !=1 );
        fin = 0;
        do {
            printf("Veuillez choisir une coordonnees MAJUSCULE\n");
            fflush(stdin);
            scanf("%c",&MAJ);
            if (MAJ>='A' && MAJ<='H') {fin = 1;}
        }while(fin !=1 );
        printf("Vous avez choisi %c et %c \n",min,MAJ);

        ligne = 2*(MAJ - 65) + 3;//fais en sorte que ce que l'utilisateur a rentre corresponde aux cases du tableau par exemple 'a' est dans la case plate[3][0]
        colonne = 2*(min - 97) + 3;//de meme pour les majuscules
        if(plate[ligne][colonne] == 'B') {
            printf("Il y deja une barriere a ces coordonnees\n");
            confirm = 0;
        }
        else {
            printf("Choisissez le sens de votre barriere\n ");
            printf("'1' pour qu'elle soit verticale et '2' pour qu'elle soit horizontale\n");
            fflush(stdin);
            scanf("%i",&sens);
            if(sens == 1 && (plate[ligne + 1][colonne] == 'B' || plate[ligne - 1][colonne] == 'B')) {
                printf("Il y deja une barriere ici\n");
                confirm = 0;
            }
            else if(sens == 2 && (plate[ligne][colonne + 1] == 'B' || plate[ligne][colonne - 1] == 'B')) {
                printf("Il y deja une barriere ici\n");
                confirm = 0;
            }
            else {
                printf("Entrer 1 pour confirmer, 0 pour reentrer les coordonnees de la barriere\n");
                fflush(stdin);
                scanf("%d",&confirm);
            }
        }
    }while(confirm != 1);
    coordb[0] = ligne;
    coordb[1] = colonne;
    coordb[2] = sens;
}