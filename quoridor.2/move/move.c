#include <stdio.h>
#include "move.h"

//module placement
void move(char plate[N][N],int nbj, int pionuti[3],int pionpres1[3], int pionpres2[3], int pionpres3[3]) {
    // premier argument = pion à bouger ; deuxieme argument = info du pion présent sur le jeu
    int fin = 1;
    int choix;
    int uti = 1;
    if (pionuti[2] == 102){uti = 2;} //pion présent sur le plateau mais n'étant pas celui du joueur effectuant l'action
    else if (pionuti[2] == 103){uti = 3;} //pion présent sur le plateau mais n'étant pas celui du joueur effectuant l'action
    else if (pionuti[2] == 104){uti = 4;} //pion présent sur le plateau mais n'étant pas celui du joueur effectuant l'action
    char mvtp;

    //demande au joueur dans quelle direction il souhaite aller
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
            if (pionuti[1]+1 < N - 1 && plate[pionuti[0]][pionuti[1]+1] != 'B') {//vérifie que le pion n'est pas en bordure de tableau ni à côté d'une barrière qui pourrait l'empecher de bouger
                //vérifie qu'il n'y a pas de pion que dans la case dans la direction indiquée par le joueur et que le pion ne sort pas du tableau en sautant au dessus d'un pion présent
                if(((pionuti[1]+2==pionpres1[1] && pionuti[0]== pionpres1[0]) || (pionuti[1]+2==pionpres2[1] && pionuti[0]== pionpres2[0]) || (pionuti[1]+2==pionpres3[1] && pionuti[0]== pionpres3[0])) && pionuti[1]+4 < N - 1) {
                    if(plate[pionuti[0]][pionuti[1]+3] == 'B') {//vérifie qu'il y a une barrière derrière le pion présent au dessus duquel le pion utilisateur saute
                        printf("Il y une barriere derriere ce pion\n Vous ne pouvez donc pas sauter au-dessus\nChoisissez ou vous voulez aller:\n1:aller au dessus du pion\n2:en dessous du pion");
                        fflush(stdin);
                        scanf("%d", &choix);
                        if(choix == 1) {
                            plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                            pionuti[1] = pionuti[1]+2;
                            pionuti[0] = pionuti[0]-2;
                            fin = 0;
                        }else if(choix == 2) {
                            plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                            pionuti[1] = pionuti[1]+2;
                            pionuti[0] = pionuti[0]+2;
                            fin = 0;
                        }
                    }
                    else {
                        plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                        pionuti[1] = pionuti[1]+4; //saute au dessus d'un pion
                        fin = 0;
                    }
                }else{
                    plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                    pionuti[1] = pionuti[1]+2; //mouvelent si aucun problèmes rencontré
                    fin = 0;
                }
            }else{
                printf("coup interdit\n"); //si le coup demandé par l'utilisateur n'est pas valide
            }
        }

        //aller à gauche
        else if (mvtp == 'g') {
            if (pionuti[1]-1 > 1 && plate[pionuti[0]][pionuti[1]-1] != 'B') {//vérifie que le pion n'est pas en bordure de tableau ni à côté d'une barrière qui pourrait l'empecher de bouger
                //vérifie qu'il n'y a pas de pion que dans la case dans la direction indiquée par le joueur et que le pion ne sort pas du tableau en sautant au dessus d'un pion présent
                if(((pionuti[1]-2==pionpres1[1]&& pionuti[0]== pionpres1[0]) || (pionuti[1]-2==pionpres2[1] && pionuti[0]== pionpres2[0]) || (pionuti[1]-2==pionpres3[1]&& pionuti[0]== pionpres3[0])) && pionuti[1]-4 > 1) {
                    if(plate[pionuti[0]][pionuti[1]-3] == 'B') {
                        printf("Il y une barriere derriere ce pion\n Vous ne pouvez donc pas sauter au-dessus\nChoisissez ou vous voulez aller:\n1:aller au dessus du pion\n2:en dessous du pion");
                        fflush(stdin);
                        scanf("%d", &choix);
                        if(choix == 1) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]-2;
                            pionuti[0] = pionuti[0]-2;
                            fin = 0;
                        }else if(choix == 2) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]-2;
                            pionuti[0] = pionuti[0]-2;
                            fin = 0;
                        }
                    }
                    else {
                        plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                        pionuti[1] = pionuti[1]-4;
                        fin = 0;
                    }
                }else{
                    plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                    pionuti[1] = pionuti[1]-2;
                    fin = 0;
                }
            }else{
                printf("coup interdit\n");
            }
        }

        //aller en haut
        else if (mvtp == 'h') {
            if (pionuti[0]-1 > 2 && plate[pionuti[0]-1][pionuti[1]] != 'B') {//vérifie que le pion n'est pas en bordure de tableau ni à côté d'une barrière qui pourrait l'empecher de bouger
                //vérifie qu'il n'y a pas de pion que dans la case dans la direction indiquée par le joueur et que le pion ne sort pas du tableau en sautant au dessus d'un pion présent
                if(((pionuti[0]-2==pionpres1[0] && pionuti[1]== pionpres1[1]) || (pionuti[0]-2==pionpres2[0] && pionuti[1]== pionpres2[1]) || (pionuti[0]-2==pionpres3[0]&& pionuti[1]== pionpres3[1])) && pionuti[0]-4 > 2) {
                    if(plate[pionuti[0]-3][pionuti[1]] == 'B') {
                        printf("Il y une barriere derriere ce pion\n Vous ne pouvez donc pas sauter au-dessus\nChoisissez ou vous voulez aller:\n1:aller a gauche du pion\n2:aller a droite du pion");
                        fflush(stdin);
                        scanf("%d", &choix);
                        if(choix == 1) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]-2;
                            pionuti[0] = pionuti[0]-2;
                            fin = 0;
                        }else if(choix == 2) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]+2;
                            pionuti[0] = pionuti[0]-2;
                            fin = 0;
                        }
                    }
                    else {
                        plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                        pionuti[0] = pionuti[0]-4;
                        fin = 0;
                    }
                }else{
                    plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                    pionuti[0] = pionuti[0]-2;
                    fin = 0;
                }
            }else{
                printf("coup interdit\n");
            }
        }

        //aller en bas
        else if (mvtp == 'b') {
            if (pionuti[0]+2 < N - 1 && plate[pionuti[0]+1][pionuti[1]] != 'B') {//vérifie que le pion n'est pas en bordure de tableau ni à côté d'une barrière qui pourrait l'empecher de bouger
                //vérifie qu'il n'y a pas de pion que dans la case dans la direction indiquée par le joueur et que le pion ne sort pas du tableau en sautant au dessus d'un pion présent
                if(((pionuti[0]+2==pionpres1[0] && pionuti[1]== pionpres1[1])|| (pionuti[0]+2==pionpres2[0]&& pionuti[1]== pionpres2[1]) || (pionuti[0]+2==pionpres3[0]&& pionuti[1]== pionpres3[1])) && pionuti[0]+4 < N + 1 ) {
                    if(plate[pionuti[0]+3][pionuti[1]] == 'B') {
                        printf("Il y une barriere derriere ce pion\n Vous ne pouvez donc pas sauter au-dessus\nChoisissez ou vous voulez aller:\n1:aller a gauche du pion\n2:aller a droite du pion");
                        fflush(stdin);
                        scanf("%d", &choix);
                        if(choix == 1) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]-2;
                            pionuti[0] = pionuti[0]+2;
                            fin = 0;
                        }else if(choix == 2) {
                            plate[pionuti[0]][pionuti[1]] = ' ';
                            pionuti[1] = pionuti[1]+2;
                            pionuti[0] = pionuti[0]+2;
                            fin = 0;
                        }
                    }
                    else {
                        plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                        pionuti[0] = pionuti[0]+4;
                        fin = 0;
                    }
                }else{
                    plate[pionuti[0]][pionuti[1]] = ' ';//met un espace là où le pion était avant son mouvement
                    pionuti[0] = pionuti[0]+2;
                    fin = 0;
                }
            }else{
                printf("coup interdit\n");
            }
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
    }while(fin != 0);
}

