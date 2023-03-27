//
//  affichage.c
//  puisssance4
//
//  Created by Nicolas Bonfond on 05/03/2022.
//

#include "affichage.h"

void printTab(int dPuissance4[6][7])
{
    int dI, dJ;

    for (dI = 5; dI >= 0; dI--) //Boucle qui affiche le tableau a chaque tour.
    {
        printf("\n");
        printf(" +---+---+---+---+---+---+---+\n"); //Bordure top
        for (dJ = 0; dJ < 7; dJ++)
        {
            printf(" | "); //Bordure left
            if (dPuissance4[dI][dJ] == 0)
            {
                printf("%d", dPuissance4[dI][dJ]);
            }
            
            if (dPuissance4[dI][dJ] == 1)
            {
                printf("%d", dPuissance4[dI][dJ]);
            }
            if (dPuissance4[dI][dJ] == 2)
            {
                printf("%d", dPuissance4[dI][dJ]);
            }
        }
        printf(" | "); //Bordure right
    }

    printf("\n +---+---+---+---+---+---+---+\n"); //Bordure bottom
}

