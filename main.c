#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

int main(int argc, char *argv[]) {
    /* Début du BenchMe */
    printf("Debut du TP 002 !\n\n");

    /* Génération du tableau */

    /* A deplacer dans test */

    float uneTaille = (float)10000000.0; // Définition taille des valeurs.
    for (int i = 1; i < 4; ++i) { // 3 graines pour avoir 3 jeux complets de valeur.
        srand(i);
        for (int j = 2; j < 6; ++j) { // 4 types de longueur de tableau : 10^2,10^3,10^4,10^5.
            int tab_max = (int)pow(10, j); // valeur du tableau
            float *unTableau = (float*) malloc(sizeof(float) * tab_max); // Définition du tableau.
            for (int l = 0; l < tab_max; l++) { // Remplissage des valeurs.
                unTableau[l] = ((float)rand()/(float)(RAND_MAX)) * uneTaille; // Ajout d'un nombre aléatoire en position i
            }
            double temps = 0;
            // Fonction n1
            clock_t f11 = clock();
            triSelection(unTableau, tab_max);
            clock_t f12 = clock(); /* Variable de calcul de temps */
            temps = tempsTotalsFonctions(f11,f12);

            // Fonction n2
            clock_t f21 = clock();
            triInsertion(unTableau, tab_max);
            clock_t f22 = clock(); /* Variable de calcul de temps */
            temps = tempsTotalsFonctions(f21,f22);

            // Fonction n3
            clock_t f31 = clock();
            triBulle(unTableau, tab_max);
            clock_t f32 = clock(); /* Variable de calcul de temps */
            temps = tempsTotalsFonctions(f31,f32);

            // Fonction n4
            clock_t f41 = clock();
            triTas(unTableau, tab_max);
            clock_t f42 = clock(); /* Variable de calcul de temps */
            temps = tempsTotalsFonctions(f41,f42);
        }
    }
    /*fin test*/

    writeResult(argv[1]);

    printf("\nFin du TP 002 !");
    return 0;
    /*Fin du BenchMe */
}
