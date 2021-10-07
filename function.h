//
// Created by v.cadoret on 06/10/2021.
//

#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H

#include <assert.h>
#include <time.h>
void tempsTotalsFonctions(clock_t t1, clock_t t2){
    float temps;
    temps = (float)(t2 - t1)/CLOCKS_PER_SEC;
    printf("temps = %.3f\n", temps);
}
void inverse(float *foo, float *bar) {
    float tmp = *foo;
    *foo = *bar;
    *bar = tmp;
}
void heapify(float unTableau[], int foo, int index) {
    int max = index;
    int gauche = 2 * index + 1;
    int droite = 2 * index + 2;

    if (gauche < foo && unTableau[gauche] > unTableau[max]){
        max = gauche;
    }
    if (droite < foo && unTableau[droite] > unTableau[max]){
        max = droite;
    }
    if (max != index) {
        inverse(&unTableau[index], &unTableau[max]);
        heapify(unTableau, foo, max);
    }
}
void triParTas(float unTableau[], int foo) {
    for (int i = foo / 2 - 1; i >= 0; i--){
        heapify(unTableau, foo, i);
    }
    for (int i = foo - 1; i >= 0; i--) {
        inverse(&unTableau[0], &unTableau[i]);
        heapify(unTableau, i, 0);
    }
}
void *triSelection(float unTableau[], int uneTaille){
    float temp;
    int index;
    for (int i = 0; i < (uneTaille - 1); i++){
        index = i;
        for (int j = i + 1; j < uneTaille; j++){
            if (unTableau[index] > unTableau[j]){
                index = j;
            }
        }
        if (index != i){
            temp = unTableau[i];
            unTableau[i] = unTableau[index];
            unTableau[index] = temp;
        }
    }
    return NULL;
}
void *triInsertion(float unTableau[], int uneTaille){
    int j;
    float temp;
    for (int i = 1 ; i <= uneTaille - 1; i++) {
        j = i;
        while (j > 0 && unTableau[j - 1] > unTableau[j]) {
            temp = unTableau[j];
            unTableau[j] = unTableau[j - 1];
            unTableau[j - 1] = temp;
            j--;
        }
    }
    return NULL;
}
/* Fonction n3*/
void triParBulle(float unTableau[], int foo){
    float tmp;
    for (int i = 0; i < foo - 1; i++){
        for (int j = 0; j < foo - i - 1; j++){
            if (unTableau[j] > unTableau[j + 1]){
                tmp = unTableau[j];
                unTableau[j] = unTableau[j + 1];
                unTableau[j + 1] = tmp;
            }
        }
    }
}


#endif //BENCHME_FUNCTION_H
