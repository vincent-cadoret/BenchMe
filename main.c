#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

#define DELAY_USEC_FP 10e6

int main() {

    clock_t t1 = clock(); /* Variable de calcul de temps */
    /* Debut du BenchMe */
    printf("Debut du TP 002 !\n\n");

    /*Génération du tableau*/
    srand(time(NULL));
    const int tab_max = (int)pow(10, 1);
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
    /* fonction n3*/
    printf("\nFonction 3 : \n");
    triParBulle(unTableau, tab_max);
    for (int i = 0; i < tab_max; i++) {
        printf("%.2f ", unTableau[i]);
    }
    /*Fonction n4*/
    printf("\nFonction 4 : \n");
    triParTas(unTableau, tab_max);
    for (int i = 0; i < tab_max; i++) {
        printf("%.2f ", unTableau[i]);
    }
    /*Calculateur de temps */
    printf("\nTemps totale : \n");
    clock_t t2 = clock(); /* Variable de calcul de temps */
    tempsTotalsFonctions(t1,t2);

    printf("\nFin du TP 002 !");
    return 0;
    /*Fin du BenchMe */
}
