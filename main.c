#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cmake-build-debug/function.h"

#define DELAY_USEC_FP 10e6

int main() {
    /* Variable de calcul de temps */
    float temps;
    clock_t t1, t2;

    /* Debut du BenchMe */
    printf("Debut du TP 002 !\n\n");

    /*Génération du tableau*/
    t1 = clock();

    srand( time( NULL ) );
    const int tab_max = (int)pow(10, 2);
    float *unTableau = (float*) malloc(sizeof(float) * tab_max);
    for (int i = 0; i < tab_max; i++) {
        unTableau[i] = ((float)rand()/(float)(RAND_MAX)) * 1000000.0;
    }

    /* Fonction n1 */
    printf("\nFonction 1 : \n");
    triSelection(unTableau, tab_max);
    for (int i = 0; i < tab_max ; i++){
        printf("%.2f ", unTableau[i]);
    }

    /* Fonction n2 */
    printf("\nFonction 2 : \n");
    triInsertion(unTableau, tab_max);
    for (int i = 0; i < tab_max ; i++){
        printf("%.2f ", unTableau[i]);
    }

    /*Fonction n3*/
    printf("\nFonction 4 : \n");
    int index = (int)sizeof(unTableau) / sizeof(unTableau[0]);

    triParTas(unTableau, index);
    for (int i = 0; i < index; i++) {
        printf("%.2f", unTableau[i]);
    }

    /*Calculateur de temps */
    printf("\nTemps totale : \n");
    t2 = clock();
    temps = (float)(t2 - t1)/CLOCKS_PER_SEC;
    printf("temps = %.3f\n", temps);

    printf("\nFin du TP 002 !");
    return 0;
    /*Fin du BenchMe */
}
