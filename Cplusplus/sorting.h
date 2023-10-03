#ifndef __SORTING__H__
#define __SORTING__H__
#include <limits.h>

void swapByValue(int *val1, int* val2);
void swapByPos(int *vec, int pos1, int pos2);
int selectionSort(int* vec, int tam);
void doulbleSelectionSort(int* vec, int tam);
void insertionSort(int* vec, int tam);
void quickSort(int* vec, int ini_pos, int last_pos);
void insertionSortSimpleOptimize(int* vec, int tam);
void shellSort(int* vec, int tam);
void print(int* vec, int tam);

#endif // __SORTING__H__