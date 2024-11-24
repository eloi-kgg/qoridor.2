#include "placement4.h"

void placement4(char plate[N][N],int piona[3], int pionb[3], int pionc[3], int piond[3]) {
    plate[piona[0]][piona[1]] = 49;//affiche 1
    plate[pionb[0]][pionb[1]] = 50;//affiche 2
    plate[pionc[0]][pionc[1]] = 51;//affcihe 3
    plate[piond[0]][piond[1]] = 52;//affiche 4
}