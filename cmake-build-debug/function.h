//
// Created by v.cadoret on 06/10/2021.
//

#ifndef BENCHME_FUNCTION_H
#define BENCHME_FUNCTION_H

#include <assert.h>
#include <time.h>
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int n, int i) {
    int max = i; //Initialize max as root
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    //If left child is greater than root
    if (leftChild < n && arr[leftChild] > arr[max])
        max = leftChild;

    //If right child is greater than max
    if (rightChild < n && arr[rightChild] > arr[max])
        max = rightChild;

    //If max is not root
    if (max != i) {
        swap(&arr[i], &arr[max]);
        //heapify the affected sub-tree recursively
        heapify(arr, n, max);
    }
}

//Main function to perform heap sort
void heapSort(int arr[], int n) {
    //Rearrange array (building heap)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    //Extract elements from heap one by one
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]); //Current root moved to the end

        heapify(arr, i, 0); //calling max heapify on the heap reduced
    }
}

//print size of array n using utility function
void display(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
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


#endif //BENCHME_FUNCTION_H
