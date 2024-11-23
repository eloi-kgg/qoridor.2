#include <stdio.h>
#include "choixact.h"

void choixact(int *ch) {
    int fin = 0;
    do {
        printf("Voulez-vous placer une barriere ou vous deplacer ?\n");
        printf("Pour placer une barriere taper : 1 \n");
        printf("Pour vous deplacer taper : 2 \n");
        fflush(stdin);
        scanf("%d", &*ch);
        if (*ch == 1 || *ch == 2){fin = 1;}
        else {printf("Entree invalide\n");}
    }while (fin != 1);
}