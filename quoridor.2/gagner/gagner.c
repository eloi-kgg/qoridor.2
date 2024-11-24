#include <stdio.h>
#include "gagner.h"

void gagner(int piona[3],int pionb[3],int pionc[3],int piond[3], int *pfin) {
    if(piona[0] == 18) {
        printf("Le pion a a gagne la partie\n");
        *pfin = 1;
        return;
    }
    if(pionb[0] == 2) {
        printf("Le pion b a gagne la partie\n");
        *pfin = 1;
        return;
    }
    if(pionc[1] == 18) {
        printf("Le pion c a gagne la partie\n");
        *pfin = 1;
        return;
    }
    if(piond[1] == 2) {
        printf("Le pion d a gagne la partie\n");
        *pfin = 1;
        return;
    }
    *pfin = 0;
}
