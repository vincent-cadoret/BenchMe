#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cmake-build-debug/function.h"

#define DELAY_USEC_FP 10e6

int main() {
    /* Debut du BenchMe */

    printf("Debut du TP 002 !\n\n");

    /*const int tab_max = (int)pow(10, 7);
    const int rand_max = (int)pow(10, 6) + 1;
    float unTableau[tab_max];

    for (int i = 0; i < tab_max; i++) {
        *//*srand(time(NULL));*//*
        unTableau[i] = ((float)rand()/(float)(RAND_MAX)) * 1000000.0;
        printf("%.2f", unTableau[i]);
    }*/

    /*int arr[] = {11, 34, 9, 5, 16, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    display(arr, n);
    heapSort(arr, n);

    printf("Sorted array:\n");
    display(arr, n);*/
    // printf("DELAY_USEC_FP: %.2f\n", DELAY_USEC_FP);
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
