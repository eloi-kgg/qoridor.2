#include <stdio.h>
#include "gagner.h"

void gagner(int piona[3],int pionb[3],int pionc[3],int piond[3], int *pfin) {
    printf("ok1");
    if(piona[0] == 18) {
        printf("Le pion a a gagne la partie");
        *pfin = 1;
    }
    if(pionb[0] == 2) {
        printf("Le pion b a gagne la partie");
        *pfin = 1;
    }
    if(pionc[1] == 18) {
        printf("Le pion c a gagne la partie");
        *pfin = 1;
    }
    if(piond[1] == 2) {
        printf("Le pion d a gagne la partie");
        *pfin = 1;
    }
    printf("ok2");
    *pfin = 0;
}
