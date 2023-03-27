//
//  iswinning.c
//  puisssance4
//
//  Created by Nicolas Bonfond on 05/03/2022.
//

#include "iswinning.h"

void isWinning(int *pEndGame, int dPuissance4[6][7])
{
    int dI, dJ, dEndGame = 0;

    for (dI = 0; dI < 6; dI++) //Boucle qui vérifie s'il y a 4 pions identiques à l'horizontale.
    {
        for (dJ = 0; dJ < 7; dJ++)
        {
            if (dPuissance4[dI][dJ] == 1 && dPuissance4[dI][dJ + 1] == 1 && dPuissance4[dI][dJ + 2] == 1 && dPuissance4[dI][dJ + 3] == 1) // Vérification Horizontale joueur 1
            {
                dEndGame = 1;
                printf("\nPlayer 1 won");
            }
            if (dPuissance4[dI][dJ] == 2 && dPuissance4[dI][dJ + 1] == 2 && dPuissance4[dI][dJ + 2] == 2 && dPuissance4[dI][dJ + 3] == 2) // Vérification Horizontale joueur 2
            {
                dEndGame = 1;
                printf("\nPlayer 2 won");
            }
        }
    }
    
    for (dI = 0; dI < 6; dI++) //Boucle qui vérifie s'il y a 4 jetons identiques à la verticale.
    {
        for (dJ = 0; dJ < 7; dJ++)
        {
            if (dPuissance4[dI][dJ] == 1 && dPuissance4[dI + 1][dJ] == 1 && dPuissance4[dI + 2][dJ] == 1 && dPuissance4[dI + 3][dJ] == 1) // Vérification Verticale joueur 1
            {
                dEndGame = 1;
                printf("\nPlayer 1 won");
            }
            if (dPuissance4[dI][dJ] == 2 && dPuissance4[dI + 1][dJ] == 2 && dPuissance4[dI + 2][dJ] == 2 && dPuissance4[dI + 3][dJ] == 2) // Vérification Verticale joueur 2
            {
                dEndGame = 1;
                printf("\nPlayer 2 won");
            }
        }
    }

    for (dI = 0; dI < 6; dI++) //Boucle qui vérifie gagnant diagonales vers le haut
    {
        for (dJ = 0; dJ < 7; dJ++)
        {
            if (dPuissance4[dI][dJ] == 1 && dPuissance4[dI + 1][dJ + 1] == 1 && dPuissance4[dI + 2][dJ + 2] == 1 && dPuissance4[dI + 3][dJ + 3] == 1) // Vérification Diagonale Haute joueur 1
            {
                dEndGame = 1;
                printf("\nPlayer 1 won");
            }
            if (dPuissance4[dI][dJ] == 2 && dPuissance4[dI + 1][dJ + 1] == 2 && dPuissance4[dI + 2][dJ + 2] == 2 && dPuissance4[dI + 3][dJ + 3] == 2) // Vérification Diagonale Haute joueur 2
            {
                dEndGame = 1;
                printf("\nPlayer 2 won");
            }
        }
    }

    for (dI = 6; dI > 0; dI--) //Boucle qui vérifie gagnant diagonales vers le bas
    {
        for (dJ = 0; dJ < 7; dJ++)
        {
            if (dPuissance4[dI][dJ] == 1 &&
                dPuissance4[dI - 1][dJ + 1] == 1 &&
                dPuissance4[dI - 2][dJ + 2] == 1 &&
                dPuissance4[dI - 3][dJ + 3] == 1) // Vérification Diagonale Basse joueur 1
            {
                dEndGame = 1;
                printf("\nPlayer 1 won");
            }
            if (dPuissance4[dI][dJ] == 2 && dPuissance4[dI - 1][dJ + 1] == 2 && dPuissance4[dI - 2][dJ + 2] == 2 && dPuissance4[dI - 3][dJ + 3] == 2) // Vérification Diagonale Basse joueur 2
            {
                dEndGame = 1;
                printf("\nPlayer 2 won");
            }
        }
    }

    for (dI = 0; dI < 6 && dPuissance4[dI][dJ] != 0; dI++) //Boucle qui vérifie si il y a draw
    {
        for (dJ = 0; dJ < 7 && dPuissance4[dI][dJ] != 0; dJ++)
        {
            if (dI >= 5 && dJ >= 6)
            {
                dEndGame = 1;
                printf("\nDraw");
            }
        }
    }

    *pEndGame = dEndGame;
}
