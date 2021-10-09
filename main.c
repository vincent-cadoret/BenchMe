#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

int main(int argc, char *argv[]) {
    /* Début du BenchMe */
    printf("Debut du TP BenchMe !\n");

    /* Génération du tableau */

    float uneTaille = (float)10000000.0; // Définition taille des valeurs.
    for (int i = 1; i < 4; ++i) { // 3 graines pour avoir 3 jeux complets de valeur.
        clock_t t1 = clock(); // Calcul du temps total par Seed.
        srand(i);

        /* Separation entre les seeds */
        writeSeed(argv[1], i);

        for (int j = 2; j < 6; ++j) { // 4 types de longueur de tableau : 10^2,10^3,10^4,10^5.
            int tab_max = (int)pow(10, j); // valeur du tableau
            float *unTableau = (float*) malloc(sizeof(float) * tab_max); // Définition du tableau.
            for (int l = 0; l < tab_max; l++) { // Remplissage des valeurs.
                unTableau[l] = ((float)rand()/(float)(RAND_MAX)) * uneTaille; // Ajout d'un nombre aléatoire en position i
            }
            float temps;

            /* Separation entre les longueurs de tableau */
            writeBreak(argv[1], j);

            // Fonction n1
            clock_t f11 = clock();
            triSelection(unTableau, tab_max);
            clock_t f12 = clock(); /* Variable de calcul de temps */
            temps = (float)tempsTotalsFonctions(f11,f12);
            writeValue(argv[1], temps);

            // Fonction n2
            clock_t f21 = clock();
            triInsertion(unTableau, tab_max);
            clock_t f22 = clock(); /* Variable de calcul de temps */
            temps = (float)tempsTotalsFonctions(f21,f22);
            writeValue(argv[1], temps);

            // Fonction n3
            clock_t f31 = clock();
            triBulle(unTableau, tab_max);
            clock_t f32 = clock(); /* Variable de calcul de temps */
            temps = (float)tempsTotalsFonctions(f31,f32);
            writeValue(argv[1], temps);

            // Fonction n4
            clock_t f41 = clock();
            triTas(unTableau, tab_max);
            clock_t f42 = clock(); /* Variable de calcul de temps */
            temps = (float)tempsTotalsFonctions(f41,f42);
            writeValue(argv[1], temps);
        }
        clock_t t2 = clock();
        printf("Temps total de la Seed %d : %.8f\n", i, tempsTotalsFonctions(t1,t2));
    }
    /*fin test*/

    printf("Fin normale du TP BenchMe !");
    return 0;
    /*Fin du BenchMe */
}
