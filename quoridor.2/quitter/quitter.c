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
        printf("fin\n");
        printf("%d\n",*pquitte);
        *pquitte = 1;
        printf("%d\n",*pquitte);
        return;
    }
    printf("pas fin\n");
    printf("%d\n",*pquitte);
    *pquitte = 0;
    printf("%d\n",*pquitte);
    return;
}