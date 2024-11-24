#include "placement2.h"

//module de placement des joueurs et barrières
void placement2(char plate[N][N],int piona[3], int pionb[3]) {
    plate[piona[0]][piona[1]] = 49;
    plate[pionb[0]][pionb[1]] = 50;
}