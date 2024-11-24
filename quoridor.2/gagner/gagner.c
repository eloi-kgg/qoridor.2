#include <stdio.h>
#include "gagner.h"

int gagner(int piona[3],int pionb[3],int pionc[3],int piond[3]) {
    printf("ok1");
    if(piona[1] == 18) {
        printf("Le pion a a gagne la partie");
        return 1;
    }
    if(pionb[1] == 2) {
        printf("Le pion b a gagne la partie");
        return 1;
    }
    if(pionc[0] == 18) {
        printf("Le pion c a gagne la partie");
        return 1;
    }
    if(piond[0] == 2) {
        printf("Le pion d a gagne la partie");
        return 1;
    }
    printf("ok2");
    return 0;
}
