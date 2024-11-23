#include "placement4.h"

void placement4(char plate[N][N],int piona[3], int pionb[3], int pionc[3], int piond[3]) {
    plate[piona[0]][piona[1]] = 03;
    plate[pionb[0]][pionb[1]] = 04;
    plate[pionc[0]][pionc[1]] = 05;
    plate[piond[0]][piond[1]] = 06;
}