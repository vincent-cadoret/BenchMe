//
// Created by v.cadoret on 06/10/2021.
//

#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H


void triSelection(float uneListe[], int uneTaille){
    float temp = 0;
    for (int i = 0; i < uneTaille; ++i) {
        if(temp < uneListe[i]){
            temp = uneListe[i];
        }
    }
}


#endif //BENCHME_FUNCTION_H
