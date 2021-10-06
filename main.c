#include <stdio.h>
#include <stdlib.h>
#include "cmake-build-debug/function.h"

int main() {
    /* Debut du BenchMe */
    printf("Debut du TP 002 !\n");
    float tab[10] = { 3, 2, 7, 10, 5, 22, 1, 27, 25, 30};

    /* Fonction n1 */
    printf("Fonction 1 : ");
    triSelection(tab, 10);
    for (int i = 0; i < 10 ; i++){
        printf("%.2f ", tab[i]);
    }

    /* Fonction n2 */
    printf("\nFonction 2 : ");
    triInsertion(tab, 10);
    for (int i = 0; i < 10 ; i++){
        printf("%.2f ", tab[i]);
    }


    printf("\nFin du TP 002 !");
    return 0;
    /*Fin du BenchMe */
}
