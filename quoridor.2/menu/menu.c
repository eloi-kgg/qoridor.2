
#include <stdio.h>
#include "menu.h"


int menuprim(int *ch) {
    int fin = 0;
    do {
        printf("\t\tMENU PRINCIPAL\n");
        printf("Entrer 0 pour quitter \n");
        printf("Entrer 1 pour lancer le jeu \n");
        printf("Entrer 2 pour voir les scores \n");
        printf("Entrer 3 afficher les regles\n");
        fflush(stdin);
        scanf("%d", &*ch);
        if (*ch == 0 || *ch == 1 || *ch == 2) {fin = 1;}
        if(*ch == 0) {return 0;}
        else if (*ch == 1 || *ch == 2 || *ch == 3){return *ch;}
        else{printf("Entree invalide\n");}

    }while (fin !=1);
    return 0;
}