#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H

#include <time.h>

void printArray(float *unTableau, int tab_max);
double tempsTotalsFonctions(clock_t t1, clock_t t2);
void inverse(float *foo, float *bar);
void writeResult(/*float *unTableau, */const char *unNomFichier);
void triSelection(float unTableau[], int uneTaille);
void triInsertion(float unTableau[], int uneTaille);
void triBulle(float unTableau[], int uneTaille);
void heapify(float unTableau[], int foo, int index);
void triTas(float unTableau[], int uneTaille);

#endif //BENCHME_FUNCTION_H
