#include <stdio.h>
#include "affichage/affichage.h"
#include "barriere/barriere.h"
#include "move/move.h"
#include "menu/menu.h"
#include "placement2/placement2.h"
#include "placement4/placement4.h"
#include "placementb/placementb.h"
#include "plateau/plateau.h"
#include "pseudo/pseudo.h"
#include "quitter/quitter.h"
#include "regle/regle.h"
#include "sauvegarde/sauvegarde.h"
#include "partie2/partie2.h"
#include "partie4/partie4.h"

int main(void) {
    //Dans le plateau les ligne sont la premières valeur du plateau et les colonnes la deuxième, donc des postions : y;x
    //les minuscule correspondent aux colonnes : x
    //les majuscules aux lignes : y

    //chaque point sur le tableau est représenté par un tableau contenant sa position en x, sa position en y et son num d'id
    //les pions on pour id 10n avec n entre 1 et 4

    char plate[N][N]; //plateau de jeu
    //les minuscule et MAJUSCULE auront toujours des positions impaires

    //Les pions auront toujours des positions paires
    int a[3] = {2,10,101}; //pion1 {y,x;identification}
    int b[3] = {18,10,102}; //pion2 {y,x;identification}
    //cas quatre joueurs :
    int c[3] = {10,2,103}; //pion 3
    int d[3] = {10,18,104}; //pion4

    char name[nb_pseudo_max][longueur_pseudo_max];//liste des pseudos
    int coordb[2];//cordonnées des barrières

    int chact = 0;//choix de l'action effectuée par le joueur
    int* poinchact = &chact;

    int choix = 1;//choix du menu (0 == quitter)
    int* poinchoix = &choix;

    int nbj = 2; //choix du nombre de joueur
    int* pnbj = &nbj;

    int score[4][2] = {{101,0},{102,0},{103,0},{104,0}};//sauvegarde des scores de chacun des joueurs, {id,score}


    do{
        if(menuprim(poinchoix) == 0) {
            return 0;
        }

        if (choix == 2) {
            //afficher le score
        }
        if (choix == 3) {
            regle();
        }
    }while (choix !=1);

    crpseudo(name,pnbj);
    plateau(plate); //initialisation plateau
    do {

        if (nbj == 2) {
            partie2(plate,a,b,c,d,coordb,nbj);
            choix = 0;
        }
        else if (nbj == 4) {
            partie4(plate,a,b,c,d,coordb,nbj);
            choix = 0;
        }

    }while (choix != 0);
    return 0;
}
