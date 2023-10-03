#include "../sorting.h"

void swapByPos(int *vec, int pos1, int pos2)
{
    int aux = vec[pos1];
    vec[pos1] = vec[pos2];
    vec[pos2] = aux;
}

void swapByValue(int *val1, int* val2)
{
    int aux = *val1;
    *val1 = *val2;
    *val2 = aux;
}