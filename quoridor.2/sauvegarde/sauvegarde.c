#include <stdio.h>
#include "sauvegarde.h"

#include <string.h>

void sauvegarde(char plate[N][N], int a[3], int b[3], int c[3], int d[3], int nbj) {
    char Nom;
    printf("Entrer le nom du fichier pour la sauvegarde: ");
    scanf("%s",Nom);
    strcat(Nom,".ece");
//ouvrir un fichier, wb -> mode ecriture + pointeur ( réecrit exactement de la meme maniere)
    FILE* p = fopen(Nom, "wb");
    if (p == NULL) {
        printf("fichier impossible a ouvrir.\n");
        return;
    }

    //plateau
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        //ecrire le caractere
            fputc(plate[i][j], p);
        }
        fputc('\n', p);
    }

    //enregistrement automatiques des pions 1 et 2
    fprintf(p, "%d %d %d\n", a[0], a[1], a[2]); //ecrit les 3 valeur du tableau du pion a (x;y;pseudo)
    fprintf(p, "%d %d %d\n", b[0], b[1], b[2]);
    // et des 3 et 4 s'il y a 4 joueurs
    if (nbj == 4) {
        fprintf(p, "%d %d %d\n", c[0], c[1], c[2]);
        fprintf(p, "%d %d %d\n", d[0], d[1], d[2]);
    }

    //enregistrement du nombre de joueur
    fprintf(p, "%d\n", nbj);

    fclose(p);
    printf("Partie sauvegardée.\n");
}
