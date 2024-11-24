#include <stdio.h>
#include "partie2.h"

#include "../quitter/quitter.h"
#include "../sauvegarde/sauvegarde.h"
#include "../gagner/gagner.h"
#include "../move/move.h"
#include "../plateau/plateau.h"
#include "../barriere/barriere.h"
#include "../affichage/affichage.h"
#include "../placement2/placement2.h"
#include "../choixact/choixact.h"
#include "../placementb/placementb.h"


void partie2(char plate[N][N],char a[3],char b[3],char c[3],char d[3], int coordb[3], int nbj) {
    int fin = 0;
    int *pfin = &fin;
    int chact = 0;
    int valide = 0;
    int valide2 = 0;
    char qtt;
    int quitte = 1;

    placement2(plate,a,b); //placement des pions en début de jeu pour deux joueurs

    do {
        affiche(plate); //affichage du plateau avec les pions
        do {
            printf("Voulez-vous placer une barriere ou vous deplacer ?\n");
            printf("Pour placer une barriere taper : 1 \n");
            printf("Pour vous deplacer taper : 2 \n");
            fflush(stdin);
            scanf("%d", &chact);
            if (chact == 1 || chact == 2){valide = 1;}
            else {printf("Entree invalide\n");}
        }while (valide != 1);

        if (chact == 1) {
            barrieres(plate,coordb);
        }
        else if (chact == 2) {
            move(plate,nbj,a,b,c,d);
        }//déplacement du premier joueur
        placement2(plate,a,b); //initialisation plateau avec nouveau placement des joueurs
        placementb(plate,coordb);

        gagner(a,b,c,d,pfin);

        if (fin == 1){return;}

        affiche(plate); //affichage du plateau avec les pions

        do {
            printf("Voulez-vous placer une barriere ou vous deplacer ?\n");
            printf("Pour placer une barriere taper : 1 \n");
            printf("Pour vous deplacer taper : 2 \n");
            fflush(stdin);
            scanf("%d", &chact);
            if (chact == 1 || chact == 2){valide2 = 1;}
            else {printf("Entree invalide\n");}
        }while (valide2 != 1);

        if (chact == 1) {
            barrieres(plate,coordb);
        }
        else if (chact == 2) {
            move(plate,nbj,b,a,c,d);
        }//déplacement du premier joueur

        placement2(plate,a,b); //initialisation plateau avec nouveau placement des joueurs
        placementb(plate,coordb);

        gagner(a,b,c,d,pfin);

        quitte = quitter(qtt);
        if (quitte == 0) {
            sauvegarde(plate,a,b,c,d,nbj);
            return;
        }

        if (fin == 1){return;}
    }while(fin != 1);

}