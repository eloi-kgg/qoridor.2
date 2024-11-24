#include <stdio.h>
#include "quitter.h"
#include "../sauvegarde/sauvegarde.h"

void quitter(int *pquitte) {
    char strch;
    printf("\t\tEntrer 'q' pour quitter la partie\n");
    fflush(stdin);
    scanf("%c", &strch);
    if (strch == 'q')
    {
        *pquitte = 1;
        return;
    }
    *pquitte = 0;
    return;
}