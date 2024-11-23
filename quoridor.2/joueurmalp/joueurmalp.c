#include <stdio.h>
#include "joueurmalp.h"

//cas si le pion joué arrive au même endroit qu'un pion présent (fct appelée seulement dans 'move')
void joueurmalp(int nbj, int pionuti[3],int pionpres1[3], int pionpres2[3], int pionpres3[3]) {
    char mvtp;
    if (nbj == 2){ //cas si le pion joué arrive au même endroit que le pion présent donc deux joueurs
            printf("Votre pion arrive sur le pion adverse.\n");
            printf("Vous pouvez passer par dessus le pion adverse.\n");
            printf("Choisissez dans quelle directions vous voulez aller :\n");
        do{
            printf("Si vous voulez deplacer le pion a droite, entrer 'd'\n");
            printf("Si vous voulez deplacer le pion a gauche, entrer 'g'\n");
            printf("Si vous voulez deplacer le pion vers le haut, entrer 'h'\n");
            printf("Si vous voulez deplacer le pion vers le bas, entrer 'b'\n");
            fflush(stdin);
            scanf("%c", &mvtp);

            //aller à droite
            if (mvtp == 'd') {
                if (pionuti[1]+1 < N) {
                    pionuti[1] = pionuti[1]+2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller à gauche
            else if (mvtp == 'g') {
                if (pionuti[1]-1 > 0) {
                    pionuti[1] = pionuti[1]-2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller en haut
            else if (mvtp == 'h') {
                if (pionuti[0]-1 > 1) {
                    pionuti[0] = pionuti[0]-2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller en bas
            else if (mvtp == 'b') {
                if (pionuti[0]+1 < N) {
                    pionuti[0] = pionuti[0]+2;
                }
                else {
                    printf("coup interdit\n");
                }
            }


            else {
                printf("coup non valide\n");
            }

        }while (pionuti[0] == pionpres1[0] && pionuti[1] == pionpres1[1]);
    }

    else if (nbj == 4) {//cas si le pion joué arrive au même endroit qu'un pion présent donc quatre joueurs
            printf("Votre pion arrive sur un pion adverse.\n");
            printf("Vous pouvez passer par dessus le pion adverse.\n");
            printf("Choisissez dans quelle directions vous voulez aller :\n");
        do{
            printf("Si vous voulez deplacer le pion a droite, entrer 'd'\n");
            printf("Si vous voulez deplacer le pion a gauche, entrer 'g'\n");
            printf("Si vous voulez deplacer le pion vers le haut, entrer 'h'\n");
            printf("Si vous voulez deplacer le pion vers le bas, entrer 'b'\n");
            fflush(stdin);
            scanf("%c", &mvtp);

            //aller à droite
            if (mvtp == 'd') {
                if (pionuti[1]+1 < N) {
                    pionuti[1] = pionuti[1]+2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller à gauche
            else if (mvtp == 'g') {
                if (pionuti[1]-1 > 0) {
                    pionuti[1] = pionuti[1]-2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller en haut
            else if (mvtp == 'h') {
                if (pionuti[0]-1 > 1) {
                    pionuti[0] = pionuti[0]-2;
                }
                else {
                    printf("coup interdit\n");
                }
            }
            //aller en bas
            else if (mvtp == 'b') {
                if (pionuti[0]+1 < N) {
                    pionuti[0] = pionuti[0]+2;
                }
                else {
                    printf("coup interdit\n");
                }
            }


            else {
                printf("coup non valide\n");
            }

        }while((pionuti[0] == pionpres1[0] && pionuti[1] == pionpres1[1]) || (pionuti[0] == pionpres2[0] && pionuti[1] == pionpres2[1]) || (pionuti[0] == pionpres3[0] && pionuti[1] == pionpres3[1]));
    }
}