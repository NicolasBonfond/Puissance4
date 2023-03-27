//
//  main.c
//  puisssance4
//
//  Created by Nicolas Bonfond on 05/03/2022.
//

#include <stdio.h>
#include "affichage.h"
#include "puissance4.h"
#include "iswinning.h"

int main()
{
    int dTour = 1, dEndGame = 0, dColumn = 0; //Integer qui permet de définir le tour en cours, la fin de la partie et la colonne choisie par les joueurs
    int dPuissance4[6][7]={0}; //Tableau contenant le jeu Puissance4 initialisé à 0
    int dI, dJ; //1er et 2eme index du tableau
    
    printf("+-------------+");
    printf("\n| PUISSANCE 4 |\n");
    printf("+-------------+");
    printTab(dPuissance4); //affiche le tableau initial.
    while (dEndGame == 0) //Boucle principale tant que le jeu est pas fini
    {
        printf("\n\nAu tour du joueur %d\n", dTour); //Permet de savoir qui doit jouer

        playerChoice(&dColumn, dPuissance4); // Fonction qui retourne l'action du joueur

        for (dI=0; dI<6; dI++)  //Boucle qui place le pion du joueur dans le tableau de jeu.
        {
            if (dPuissance4[dI][dColumn - 1] == 0)
            {
                dPuissance4[dI][dColumn - 1] = dTour;
                dI = 6;
            }
        }

        printTab(dPuissance4); // Fonction qui affiche le tableau dPuissance4 à la fin de chaque tour
          
        if (dTour == 1)
        {
            dTour++; //Fin du tour du joueur 1.
        }
        else
        {
            dTour--; //Fin du tour du joueur 2.
        }


        isWinning(&dEndGame, dPuissance4); // Fonction qui vérifie le statut du jeu (win or draw)
    }
    printf("\n\n+----------------+\n");
    printf("| Match finished |");
    printf("\n+----------------1+");
}
