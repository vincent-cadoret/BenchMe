#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

int main(int argc, char *argv[]) {
    /* Debut du BenchMe */
    printf("Debut du TP 002 !\n\n");

    /*Génération du tableau*/

    srand(3);
    const int tab_max = (int)pow(10, 2);
    float *unTableau = (float*) malloc(sizeof(float) * tab_max);
    float uneTaille = (float)10000000.0;

    for (int i = 0; i < tab_max; i++) {
        unTableau[i] = ((float)rand()/(float)(RAND_MAX)) * uneTaille;
    }

    /* Fonction n1 */

    printf("\nFonction 1 : \n");
    clock_t f11 = clock();
    triSelection(unTableau, tab_max);
    printArray(unTableau, tab_max);
    clock_t f12 = clock(); /* Variable de calcul de temps */
    printf("Temps : %.3f", tempsTotalsFonctions(f11,f12));

    /* Fonction n2 */

    printf("\nFonction 2 : \n");
    clock_t f21 = clock();
    triInsertion(unTableau, tab_max);
    printArray(unTableau, tab_max);
    clock_t f22 = clock(); /* Variable de calcul de temps */
    printf("Temps : %.3f", tempsTotalsFonctions(f21,f22));

    /* Fonction n3*/

    printf("\nFonction 3 : \n");
    clock_t f31 = clock();
    triBulle(unTableau, tab_max);
    printArray(unTableau, tab_max);
    clock_t f32 = clock(); /* Variable de calcul de temps */
    printf("Temps : %.3f", tempsTotalsFonctions(f31,f32));

    /* Fonction n4 */

    printf("\nFonction 4 : \n");
    clock_t f41 = clock();
    triTas(unTableau, tab_max);
    printArray(unTableau, tab_max);
    clock_t f42 = clock(); /* Variable de calcul de temps */
    printf("Temps : %.3f", tempsTotalsFonctions(f41,f42));

    printf("\nNom du fichier : %s\n", argv[1]);
    writeResult(argv[1]);

    printf("\nFin du TP 002 !");
    return 0;
    /*Fin du BenchMe */
}
