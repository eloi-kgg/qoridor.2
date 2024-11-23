#include <stdio.h>
#include "affichage.h"

//module d'affichage
void affiche(char plate[N][N])
{
    int i,j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%c", plate[i][j]);
        }
        printf("\n");
    }
}