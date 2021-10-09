#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H

#include <time.h>

void printArray(float *unTableau, int tab_max);
double tempsTotalsFonctions(clock_t t1, clock_t t2);
void inverse(float *foo, float *bar);
void writeValue(char *fichier, float unChiffre);
void writeBreak(char *fichier, int unePuissance);
void writeSeed(char *fichier, int uneSeed);
void triSelection(float unTableau[], int uneTaille);
void triInsertion(float unTableau[], int uneTaille);
void triBulle(float unTableau[], int uneTaille);
void heapify(float unTableau[], int foo, int index);
void triTas(float unTableau[], int uneTaille);


#endif //BENCHME_FUNCTION_H
