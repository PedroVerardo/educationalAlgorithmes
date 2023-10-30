#include "sorting.h"
#include <iostream>

int main(void)
{
    int vec[] { 7,3,6,2,4,1,8,11,10,24,15,9 };
    int vec2[] { 7,3,6,2,4,1,8,11,10,24,15,9 };
    int tam = sizeof(vec)/sizeof(vec[0]);
    int tam2 = sizeof(vec2)/sizeof(vec2[0]);

    selectionSort(vec, tam);
    print(vec, tam);
    bubbleSort(vec2, tam2);
    print(vec2, tam2);
}