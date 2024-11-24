#include <stdio.h>
#include "quitter.h"
#include "../sauvegarde/sauvegarde.h"

void quitter(int *pquitte) {
    printf("\t\tEntrer '0' pour quitter la partie\n");
    fflush(stdin);
    scanf("%d", pquitte);
    printf("%d", *pquitte);
}