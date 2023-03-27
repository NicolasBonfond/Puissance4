//
//  puissance4.c
//  puisssance4
//
//  Created by Nicolas Bonfond on 05/03/2022.
//

#include "puissance4.h"

void playerChoice(int *pColumn, int dPuissance4[6][7])
{
    int dColumn = 0;
    
    printf("\nVeuillez choisir une colonne entre 1 et 7: ");
    scanf("%d", &dColumn);

    while (dColumn > 7 || dColumn < 1) //Boucle tant que != la taille maximale de la 2eme dimension du tableau
    {
        printf("\nColonne incorrecte, recommencez: ");
        scanf("%d", &dColumn);
    }

    while (dPuissance4[5][dColumn - 1] != 0) //Boucle tant que le joueur choisis une colonne pleine
    {
        printf("\nCette colonne est pleine. Veuillez en choisir une autre: ");
        scanf("%d", &dColumn);
    }

    *pColumn = dColumn;
}
