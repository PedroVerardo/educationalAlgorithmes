#ifndef __SORTING__H__
#define __SORTING__H__
#include <limits.h>
#include <pthread.h>

void swapByValue(int *val1, int* val2);
void swapByPos(int *vec, int pos1, int pos2);
void selectionSort(int* vec, int size);
void doulbleSelectionSort(int* vec, int size);
void insertionSort(int* vec, int size);
void quickSort(int* vec, int ini_pos, int last_pos);
void insertionSortSimpleOptimize(int* vec, int size);
void shellSort(int* vec, int size);
void print(int* vec, int size);
void copyArray(int* vec1, int* vec2, int ini, int last);
void mergeSort(int* vec, int ini, int last);
void bubbleSort(int* vec, int tam);

#endif // __SORTING__H__