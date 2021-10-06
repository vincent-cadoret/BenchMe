//
// Created by v.cadoret on 06/10/2021.
//

#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H

#include <assert.h>
#include <time.h>


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
}
void *triInsertion(float unTableau[], int uneTaille){
    int j = 0;
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
}


#endif //BENCHME_FUNCTION_H
