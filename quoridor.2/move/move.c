#include <stdio.h>
#include "move.h"

//module placement
void move(char plate[N][N],int nbj, int pionuti[3],int pionpres1[3], int pionpres2[3], int pionpres3[3],int gagn[2]){// premier argument = pion à bouger ; deuxieme argument = info du pion présent sur le jeu
    int fin = 1;
    int uti = 1;
    if (pionuti[2] == 102){uti = 2;}
    else if (pionuti[2] == 103){uti = 3;}
    else if (pionuti[2] == 104){uti = 4;}
    char mvtp;

    //toutes les possibilités du joueurs
    do {
        printf("Au tour du joueur %d \n",uti);
        printf("Si vous voulez deplacer le pion a droite, entrer 'd'\n");
        printf("Si vous voulez deplacer le pion a gauche, entrer 'g'\n");
        printf("Si vous voulez deplacer le pion vers le haut, entrer 'h'\n");
        printf("Si vous voulez deplacer le pion vers le bas, entrer 'b'\n");
        fflush(stdin);
        scanf("%c", &mvtp);

        //aller à droite
        if (mvtp == 'd') {
            if (pionuti[1]+1 < N && plate[pionuti[0]][pionuti[1]+1] != 'B') {
                pionuti[1] = pionuti[1]+2;
                fin = 0;
            }
            else {
                printf("coup interdit\n");
            }
        }
        //aller à gauche
        else if (mvtp == 'g') {
            if (pionuti[1]-1 > 0 && plate[pionuti[0]][pionuti[1]-1] != 'B') {
                pionuti[1] = pionuti[1]-2;
                fin = 0;
            }
            else {
                printf("coup interdit\n");
            }
        }
        //aller en haut
        else if (mvtp == 'h') {
            if (pionuti[0]-1 > 1 && plate[pionuti[0]-1][pionuti[1]] != 'B') {
                pionuti[0] = pionuti[0]-2;
                fin = 0;
            }
            else {
                printf("coup interdit\n");
            }
        }
        //aller en bas
        else if (mvtp == 'b') {
            if (pionuti[0]+1 < N && plate[pionuti[0]+1][pionuti[1]] != 'B') {
                pionuti[0] = pionuti[0]+2;
                fin = 0;
            }
            else {
                printf("coup interdit\n");
            }
        }


        else {
            printf("coup non valide\n");
        }
        //changement de joueur
        if(fin == 0)
        {
            if (uti!= 4){//s'il n'y a que 2 joeurs=> uti!= 2
                uti++;
            }
            else{
                uti = 1;
            }
        }
    }while (fin != 0);//fin du déplacement du joueur

    if(nbj == 2) {
        if((pionuti[0] == pionpres1[0] && pionuti[1] == pionpres1[1])) {
            joueurmalp(nbj, pionuti[3], pionpres1[3], pionpres2[3], pionpres3[3]);
        }
    }
    if (nbj == 4) {
        if ((pionuti[0] == pionpres1[0] && pionuti[1] == pionpres1[1]) || (pionuti[0] == pionpres2[0] && pionuti[1] == pionpres2[1]) || (pionuti[0] == pionpres3[0] && pionuti[1] == pionpres3[1])) {
            joueurmalp(nbj, pionuti[3], pionpres1[3], pionpres2[3], pionpres3[3]);
        }
    }
}
