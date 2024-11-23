#include <stdio.h>
#include "regle.h"

void regle() {
    char regle;
    printf("Si vous voulez afficher les regles, entrer 'r'\n");
    scanf("%c", &regle);

    if(regle == 'r') {
        printf("        REGLE DU JEU DU QUORIDOR:\n "
               "-Le but du jeu: ammener son pion de l'autre cote du plateau de jeu\n "
               "-Le jeu se joue a 2 ou 4 joueurs,au debut de la partie, chaque joueur place son pion au centre de sa ligne de depart\n "
               "-Le plateau est un rectangle compose de 81 cases entre lesquels on peut placer des barrieres pour bloquer le passage\n"
               "-Il y a 20 barrieres(longues de 2 cases, verticale ou horizontale) au total dans chaque partie (10 par joueur s'il y a 2 joueurs et 5 s'il y a 4 joueurs)\n "
               "-Attention cependant la partie se termine si une ligne ou une colonne est completement bloquee par des barrieres\n "
               "-Chacun son tour les joueurs peuvent se deplacer,poser une barriere ou ne pas jouer et si deux pions sont en face,\n "
               "le pion peut sauter au dessus de l'autre et ratterrir une case derriere sauf s'il y a une barriere et dans ce cas \n "
               "le joueur choisit si son pion atterrit a droite ou a gauche de l'autre pion\n "
               "-Dans ce jeu qui allie stratageme et reflexion, qui saura trouver le bon chemin ?\n\n");
    }
}