#include <stdio.h>
#include "placementb.h"

void placementb(char plate[N][N],int coordb[3]) {
    plate[coordb[0]][coordb[1]] = 'B';
    printf("B\n");
    if(coordb[2] == 2) {
        plate[coordb[0]][coordb[1]+1] = 'B';
        plate[coordb[0]][coordb[1]-1] = 'B';
        printf("1\n");
    }
    else if(coordb[2] == 1) {
        plate[coordb[0]+1][coordb[1]] = 'B';
        plate[coordb[0]-1][coordb[1]] = 'B';
        printf("2\n");
    }
}

