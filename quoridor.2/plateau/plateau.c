
#include "plateau.h"


//création du plateau de jeu, utilisation de N car défini dans sous_prog.h
void plateau(char plate[N][N]) {
    int i,j;
    char murv = '|'; //mur vertical
    char murh = '-' ; //mur horizontal
    char murc = '+'; //coin
    char esp = ' '; //espace pour placer les pions

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) {

            if (i == 0) { //coordonnées horizontales
                if(j==0 || j == 1 || j == N-1 || j%2 ==0) {
                    plate[i][j] = esp;
                } else {
                    plate[i][j] = 'a' + j/2 -1;
                }
            }

            else if (i == 1) { //bord horizontale haut
                for (j = 0; j < N; j++) {
                    if (j==0) {plate[i][j] = esp;}
                    else {
                        plate[i][j] = murh;
                    }
                }
            }

            else if (i == N-1) { //bord horizontale bas
                for (j = 0; j < N; j++) {
                    if (j==0) {plate[i][j] = esp;}
                    else {
                        plate[i][j] = murh;
                    }
                }
            }

            else if (j == 0 && i > 1) { //coordonnées verticales
                if (i%2 == 0) {
                    plate[i][j] = esp;
                }
                else {
                    plate[i][j] = 'A' + i/2 - 1;
                }
            }

            else if (i%2 != 0) //ligne murs horizontals
            {
                if (j==1 || j==N-1){plate[i][j] = murv;}
                else if (j%2!=0){plate[i][j] = murc;}
                else {plate[i][j] = murh;}
            }

            else if (i%2 == 0 && i != N-1) //ligne alternant espaces et murs verticals
            {
                if (j==1 || j==N-1){plate[i][j] = murv;}
                else if (j%2 == 0){plate[i][j] = esp;}
                else {plate[i][j] = murv;}
            }
        }
    }
}
