#include <stdio.h>
#include "quitter.h"
#include "../sauvegarde/sauvegarde.h"

int quitter() {
    char strch;
    printf("\t\tEntrer 'q' pour quitter, 'c' pour continuer la partie\n");
    fflush(stdin);
    scanf("%c", &strch);

    if (strch == 'q'){return 1;}

    return 0;
}