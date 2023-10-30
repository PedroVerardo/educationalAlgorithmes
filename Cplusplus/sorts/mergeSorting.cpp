#include "../sorting.h"
#include <stdlib.h>
#include <iostream>

void merge(int *vec, int ini, int middle, int last)
{
    int nLeft = middle - ini + 1;
    int nRight = last - middle;
    int* newVecLeft = (int*)malloc((nLeft) * sizeof(int));
    int* newVecRight = (int*)malloc((nRight) * sizeof(int));
    copyArray(vec, newVecLeft, ini, nLeft);
    copyArray(vec, newVecRight, middle + 1, nRight);
    int smallestLeftIndex = 0;
    int smallestRightIndex = 0;
    int k = ini;
    while (smallestLeftIndex < nLeft && smallestRightIndex < nRight)
    {
        if(newVecLeft[smallestLeftIndex] <= newVecRight[smallestRightIndex])
        {
            vec[k] = newVecLeft[smallestLeftIndex];
            ++smallestLeftIndex;
        }
        else{
            vec[k] = newVecRight[smallestRightIndex];
            ++smallestRightIndex;
        }
        ++k;
    }

    while (smallestLeftIndex < nLeft)
    {
        vec[k] = newVecLeft[smallestLeftIndex];
        ++smallestLeftIndex;
        ++k;
    }

    while (smallestRightIndex < nRight)
    {
        vec[k] = newVecRight[smallestRightIndex];
        ++smallestRightIndex;
        ++k;
    }
    free(newVecLeft);
    free(newVecRight);
}

void mergeSort(int* vec, int ini, int last)
/*this sort is not a in-place aproach and have O(N)
memory complexity*/
{
    if(ini >= last)
    {
        return;
    }
    int middle = (last + ini)/2;
    mergeSort( vec, ini, middle);
    mergeSort( vec, middle + 1, last);
    merge(vec, ini, middle, last);
}